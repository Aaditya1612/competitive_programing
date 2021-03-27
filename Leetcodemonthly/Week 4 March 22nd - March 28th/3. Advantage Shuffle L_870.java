//Doesn't handle duplicate elements sceario

/*
Given two arrays A and B of equal size, the advantage of A with respect to B is the number of indices i for which A[i] > B[i].
Return any permutation of A that maximizes its advantage with respect to B.

Example 1:
Input: A = [2,7,11,15], B = [1,10,4,11]
Output: [2,11,7,15]

Example 2:
Input: A = [12,24,8,32], B = [13,25,32,11]
Output: [24,32,8,12]

Note:
1 <= A.length = B.length <= 10000
0 <= A[i] <= 10^9
0 <= B[i] <= 10^9
*/

class Solution {
    public int[] advantageCount(int[] A, int[] B) {
        HashMap < Integer, Integer > indexes = new HashMap < > ();
        HashSet < Integer > filledIndexes = new HashSet < > ();
        int[] sortedB = new int[B.length];
        for (int i = 0; i < B.length; i++) {
            indexes.put(B[i], i);
            sortedB[i] = B[i];
        }

        int result[] = new int[A.length];
        Arrays.fill(result, -1);
        Arrays.sort(A);
        Arrays.sort(sortedB);


        int i = 0, j = 0;
        while (i < A.length && j < sortedB.length) {
            if (A[i] > sortedB[j]) {
                result[indexes.get(sortedB[j])] = A[i];
                filledIndexes.add(i);
                i++;
                j++;

            } else {
                i++;
            }
        }
        
        int index = 0;
        for (int m = 0; m < result.length; m++) {
            if (result[m] == -1) {

                while (filledIndexes.contains(index)) {
                    index++;
                }
                result[m] = A[index++];
            }
        }
        return result;
    }
}