// Smallest number with sum of digits as N and divisible by 10^N
// EasyAccuracy: 57.91%Submissions: 1578Points: 2
// Find the smallest number such that the sum of its digits is N and it is divisible by 10N.

// Example 1:

// Input: N = 5
// Outptut: 500000
// Explanation: Sum of digits of 500000
// is 5 and divisible by 105.
// Example 2:

// Input: N = 20
// Output: 29900000000000000000000
// Explanation: Sum of digits of
// 29900000000000000000000 is 20 and
// divisible by 220.

// Your Task:
// You don't need to read or print anything. Your task is to complete the function digitsNum() which takes the input parameter N and returns the smallest number such that sum of its digits is N and divisible by 10N.

// Expected Time Complexity: O(N)
// Expected Space Complexity: O(N)

// Constraints:
// 1 <= N <= 10000

class Solution
{
public:
    string digitsNum(int N)
    {
        // Code here.
        int temp = N;
        string ans = "";
        if (N > 9)
        {
            while (1)
            {
                int rem = N - 9;
                if (rem > 0)
                {
                    ans = '9' + ans;
                    N = rem;
                }
                else
                {
                    string k = to_string(N);
                    ans = k + ans;
                    break;
                }
            }
        }
        else
        {
            string k = to_string(N);
            ans += k;
        }
        for (int i = 0; i < temp; i++)
        {
            ans += '0';
        }
        return ans;
    }
};
