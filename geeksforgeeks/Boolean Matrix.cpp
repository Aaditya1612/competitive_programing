/*

Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

Example 1:

Input:
R = 2, C = 2
matrix[][] = {{1, 0},
              {0, 0}}
Output: 
1 1
1 0 
Explanation:
Only cell that has 1 is at (0,0) so all 
cells in row 0 are modified to 1 and all 
cells in column 0 are modified to 1.

Example 2:

Input:
R = 4, C = 3
matrix[][] = {{ 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0}}
Output: 
1 1 1
1 1 1
1 1 1
1 0 0 
Explanation:
The position of cells that have 1 in
the original matrix are (0,0), (1,0)
and (2,0). Therefore, all cells in row
0,1,2 are and column 0 are modified to 1. 

Your Task:
You dont need to read input or print anything. Complete the function booleanMatrix() that takes the matrix as input parameter and modifies it in-place.
 

Expected Time Complexity: O(R * C)
Expected Auxiliary Space: O(R + C) 
 

Constraints:
1 ≤ R, C ≤ 1000
0 ≤ matrix[i][j] ≤ 1

*/

 void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int row = matrix.size();
        int col = matrix[0].size();
        
        bool arr_row[row]; fill(arr_row,arr_row+row,false);
        bool arr_col[col];fill(arr_col,arr_col+col,false);
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]){
                    arr_row[i] = true;
                    arr_col[j] = true;
                }
            }
        }
        
        for(int i=0; i<row; i++){
            if(arr_row[i]){
                for(int j=0; j<col; j++){
                    matrix[i][j] = 1;
                }
            }
        }
        
        for(int i=0; i<col; i++){
            if(arr_col[i]){
                for(int j=0; j<row; j++){
                    matrix[j][i] = 1;
                }
            }
        }
        
    }
























