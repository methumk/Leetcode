#include <bits/stdc++.h>

class Solution {
public:
    
    void rotate(vector<vector<int>>& matrix) {
        //only rotate if the size of the matrix is greater than 1
        if (matrix.size() > 1){
            
            //create the transpose of the matrix
            for (int i = 0; i < matrix.size(); ++i){
                for (int j = i; j < matrix.size(); ++j){
                    //only need to create the transpose when i is not equal to j
                    if (i != j){
                        int hold = matrix[i][j];
                        matrix[i][j] = matrix[j][i];
                        matrix[j][i] = hold;
                    }
                }
            }
            
             
            //reverse the matrix to get the rotation
            for (int i = 0; i < matrix.size(); ++i){
                for (int j = 0; j < matrix.size()/2; ++j){
                    int hold = matrix[i][j];
                    
                    matrix[i][j] = matrix[i][matrix.size()-1-j];
                    matrix[i][matrix.size()-1-j] = hold;
                }
            }
            
            
        }
    }
    
        
   
};