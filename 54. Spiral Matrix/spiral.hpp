#include <bits/stdc++.h>

class Solution {
public: 
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;
        
        int i = 0, j = -1;
        //cl: ceiling limit, fl: floor limit, rl: right limit, ll: left limit
        int cl = -1, fl = matrix.size(), rl = matrix[0].size(), ll = -1;
        
        while(1){
            //go right
            if (j+1 < rl){
                for (++j; j < rl; ++j) spiral.push_back(matrix[i][j]);
                --j;
                ++cl;
                
                //go down
                if (i+1 < fl){
                    for (++i; i < fl; ++i) spiral.push_back(matrix[i][j]);
                    --i;
                    --rl;
                    
                    //go left
                    if (j-1 > ll){
                        for (--j; j > ll; --j) spiral.push_back(matrix[i][j]);
                        ++j;
                        --fl;
                        
                        //go up
                        if (i-1 > cl){
                            for ( --i; i > cl; --i) spiral.push_back(matrix[i][j]);
                            ++i;
                            ++ll;
                        }else
                            break;
                        
                    }else
                        break;
                    
                }else
                    break;
                
            }else
                break;

        }
        
        
        return spiral;
    }
};