#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int time = 0;
        //while there are 1s adj to a 2
        while(can_rot(grid)){
           //searches for 2 and converts adj if possible 
           search_two(grid, time);
        }
        
        //if grid rets 0 (no 1s) return the time, otherwise ret impossible
        if (check(grid) == 0){
            return time;
        }else{
            return -1;
        }
        
        
    }
    
    //checks whether there are 1s adj to a 2
    bool can_convert(vector<vector<int>>& arr, int r, int c){
        int can = 0;
        
        if (r != 0)
            if (arr[r-1][c] == 1)
                can++;
        
        if (r != arr.size()-1)
            if (arr[r+1][c] == 1)
                can++;
        if (c != 0)
            if (arr[r][c-1] == 1)
                can++;
        
        if (c != arr[0].size()-1)
            if (arr[r][c+1] == 1)
                can++;
        
        if (can != 0)
            return true;
        else
            return false;
    }
    
    //converts adj 1s to a 2
    void convert(vector<vector<int>>& arr, int r, int c){
        if (r != 0)
            if (arr[r-1][c] == 1)
                arr[r-1][c] = 2;
        
        if (r != arr.size()-1)
            if (arr[r+1][c] == 1)
                arr[r+1][c] = 2;
        if (c != 0)
            if (arr[r][c-1] == 1)
                arr[r][c-1] = 2;
        
        if (c != arr[0].size()-1)
            if (arr[r][c+1] == 1)
                arr[r][c+1] = 2;
    }
    
    //searches for twos, checks if there are 1s adj and converts and increments time
    void search_two(vector<vector<int>>& arr, int& time){
        int r = arr.size(), c = arr[0].size();
        vector<vector<int>> grid = arr;
        int hold = 0;
        for (int i = 0; i < r; ++i){
            for (int j = 0; j < c; ++j){
                if (grid[i][j] == 2 && can_convert(arr, i, j)){
                    convert(arr, i, j);
                    hold++;
                }
            }
        }
        if (hold > 0)
            time++;
       
    }
    
    //can rot checks if there are 1's adjacent to 2
    bool can_rot(vector<vector<int>>& arr){
        int count = 0, r = arr.size(), c = arr[0].size();
        
        for (int i = 0; i < r; ++i){
            for (int j = 0; j < c; ++j){
                if (arr[i][j] == 2){
                    if (i != 0)
                        if (arr[i-1][j] == 1)
                            count++;
        
                    if (i != arr.size()-1)
                        if (arr[i+1][j] == 1)
                             count++;
                    
                    if (j != 0)
                        if (arr[i][j-1] == 1)
                             count++;
        
                    if (j != arr[0].size()-1)
                        if (arr[i][j+1] == 1)
                             count++;
                }
            }
        }
        
        if (count == 0)
            return false;
        else
            return true;
    }
    
    //checks to see if there are any 1s
    int check(vector<vector<int>>& arr){
        int r = arr.size(), c = arr[0].size();
        
        for (int i = 0; i < r; ++i){
            for (int j =0; j < c; ++j){
               if (arr[i][j] == 1){
                   return -1;
               } 
            }
        }
        return 0;
    }
    
    
    
};