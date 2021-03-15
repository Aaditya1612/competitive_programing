/*
Given a binary string s and an integer k.
Return True if every binary code of length k is a substring of s. Otherwise, return False.

Example 1:
Input: s = "00110110", k = 2
Output: true
Explanation: The binary codes of length 2 are "00", "01", "10" and "11". They can be all found as substrings at indicies 0, 1, 3 and 2 respectively.

Example 2:
Input: s = "00110", k = 2
Output: true

Example 3:
Input: s = "0110", k = 1
Output: true
Explanation: The binary codes of length 1 are "0" and "1", it is clear that both exist as a substring. 

Example 4:
Input: s = "0110", k = 2
Output: false
Explanation: The binary code "00" is of length 2 and doesn't exist in the array.

Example 5:
Input: s = "0000000001011100", k = 4
Output: false
 
Constraints:
1 <= s.length <= 5 * 10^5
s consists of 0's and 1's only.
1 <= k <= 20

Hint #1  
We need only to check all sub-strings of length k.

Hint #2  
The number of distinct sub-strings should be exactly 2^k.
*/

//Time limit exceeded

class Solution {
    static boolean answer = true;

    public void generateBinary(String s, String str, int i, int k) {
        if (answer == false)
            return;
        if (i == k) {
            System.out.print(str + " ");
            if (s.indexOf(str) == -1)
                answer = false;
            return;
        }
        str = str.substring(0, i) + "0" + str.substring(i + 1);
        generateBinary(s, str, i + 1, k);

        str = str.substring(0, i) + "1" + str.substring(i + 1);
        generateBinary(s, str, i + 1, k);
    }
    
    public boolean hasAllCodes(String s, int k) {
        answer = true;
        String str = "";
        for (int i = 0; i < k; i++) {
            str += "0";
        }
        generateBinary(s, str, 0, k);
        System.out.println();
        return answer;
    }
}

===============================================================================

class Solution {
    public boolean hasAllCodes(String s, int k) {
        int need = (int) Math.pow(2, k);
        HashSet < String > got = new HashSet < String > ();
        for (int i = 0; i <= s.length() - k; i++) {
            String str = s.substring(i, i + k);
            if (!got.contains(str)) {
                got.add(str);
                if (need == got.size())
                    return true;
            }
        }
        if (got.size() < need)
            return false;
        return true;
    }
}