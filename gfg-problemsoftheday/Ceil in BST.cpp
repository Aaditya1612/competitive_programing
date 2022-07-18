// Ceil in BST
// MediumAccuracy: 55.95%Submissions: 12575Points: 4
// Given a BST and a number X, find Ceil of X.
// Note: Ceil(X) is a number that is either equal to X or is immediately greater than X.

// Example 1:

// Input:
//       5
//     /   \
//    1     7
//     \
//      2 
//       \
//        3
// X = 3
// Output: 3
// Explanation: We find 3 in BST, so ceil
// of 3 is 3.
// Example 2:

// Input:
//      10
//     /  \
//    5    11
//   / \ 
//  4   7
//       \
//        8
// X = 6
// Output: 7
// Explanation: We find 7 in BST, so ceil
// of 6 is 7.
// Your task:
// You don't need to read input or print anything. Just complete the function findCeil() to implement ceil in BST which returns the ceil of X in the given BST.

// Expected Time Complexity: O(Height of the BST)
// Expected Auxiliary Space: O(Height of the BST).

// Constraints:
// 1 <= Number of nodes <= 105
// 1 <= Value of nodes<= 105

// View Bo

int findCeil(Node* root, int x) {
   Node* prev;
   if (root == NULL) return -1;

   // Your code here
   while(root!=NULL){
       if(root->data == x){
           return x;
       }
       else if(root->data > x){
           prev = root;
           root = root->left;
           if(root == NULL){
               return prev->data;
           }
       }
       else if(root->data < x){
           root = root->right;
           if(root == NULL){
               return prev->data;
           }
       }
   }
}






































