// BST to greater sum tree 
// Medium Accuracy: 73.5% Submissions: 4616 Points: 4
// Given a BST, transform it into greater sum tree where each node contains sum of all nodes greater than that node.

// Example 1:

// Input:
//            2
//          /    \
//         1      6
//               /  \
//              3    7
// Output: 18 16 13 7 0
// Explanation:
// Every node is replaced with the 
// sum of nodes greater than itself. 
// The resultant tree is:
//                16
//              /    \
//            18       7
//                   /   \
//                  13    0
// Example 2:

// Input:
//           2
//          /
//         1
// Output: 2 0
// Explanation:
// The resultant tree is :
//              0
//             /
//           2
// Your task :
// You don't have to read input or print anything. Your task is to complete the function transformTree() which takes the root of the tree as input and transforms the BST to a greater sum tree.
// Note : The driver code prints the inorder traversal of the transformed BST.
 
// Expected Time Complexity: O(N), N = number of nodes
// Expected Auxiliary Space: O(N), N = number of nodes
 
// Constraints :
// 1 ≤ N ≤ 104
// View Bookmarked Problems



class Solution
{
    public:
    int sum = 0;
    void transformTree(struct Node *root)
    {
        //code here
        if(!root) return;
        transformTree(root->right);
        int currSum = root->data + sum;
        root->data = sum;
        sum = currSum;
        transformTree(root->left);
    }
};





















