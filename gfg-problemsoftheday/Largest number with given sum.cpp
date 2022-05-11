// Largest number with given sum 
// Easy Accuracy: 50.74% Submissions: 22677 Points: 2
// Geek lost the password of his super locker. He remembers the number of digits N as well as the sum S of all the digits of his password. He know that his password is the largest number of N digits that can be made with given sum S. As he is busy doing his homework, help him retrieving his password.

// Example 1:

// Input:
// N = 5, S = 12
// Output:
// 93000
// Explanation:
// Sum of elements is 12. Largest possible 
// 5 digit number is 93000 with sum 12.
// Example 2:

// Input:
// N = 3, S = 29
// Output:
// -1
// Explanation:
// There is no such three digit number 
// whose sum is 29.
// Your Task : 
// You don't need to read input or print anything. Your task is to complete the function largestNumber() which takes 2 integers N and S as input parameters and returns the password in the form of string, else return "-1" in the form of string.

// Constraints:
// 1 ≤ N ≤ 104
// 0 ≤ S ≤ 9*104

// Expected Time Complexity : O(N)
// Expected Auxilliary Space : O(1)

// View Bookmarked Problems




class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        if((n*9)<sum)
       return "-1";
       
       string ans;
       for(int i=9;i>=0;i--)
       {
           while(sum>=i && n>0)
           {
               sum-=i;
               ans+=to_string(i);
               n--;
           }
       }
       
       return ans;
    }
};
















