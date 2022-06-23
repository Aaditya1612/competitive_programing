// Count possible ways to construct buildings 
// Medium Accuracy: 35.06% Submissions: 6062 Points: 4
// Given N, the number of plots on either sides of the road. Find the total ways to construct buildings in the plots such that there is a space between any 2 buildings. All plots on one side of the road are continuous.
// Lets suppose * represents a plot, then for N=3, the plots can be represented as * * * | | * * *                               

// Where | | represents the road.                                                                                                                                                                  
// Note: As the answer can be very large, print it mod 1000000007

 

// Example 1:

// Input: N = 3
// Output: 25
// Explanation: 3 plots, which means possible
// ways for one side are BSS, BSB, SSS, SBS,
// SSB where B represents a building and S
// represents an empty space Total possible 
// ways are 25, because a way to place on one
// side can correspond to any of 5 ways on other
// side.
// Example 2:

// Input: N = 10
// Output: 20736
// Explanation: There are 20736 ways for N = 10.
 

// Your Task:
// You don't need to read or print anything. Your task is to complete the function ToralWays() which takes N as input parameter and returns the total possible ways modulo 109 + 7.
 

// Expected Time Complexity: O(N)
// Expected Space Complexity: O(N)
 

// Constraints:
// 1 <= N <= 100000

// View Bookmarked Problems
// Company Tags



class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	     long long int prev = 1;
        long long int curr = 2,temp;
        for(int i=2;i<=N;i++){
            temp = (prev % 1000000007 + curr % 1000000007) % 1000000007;
            prev = curr;
            curr = temp;
        }
        return (curr % 1000000007 * curr % 1000000007) % 1000000007;
	}
};


































