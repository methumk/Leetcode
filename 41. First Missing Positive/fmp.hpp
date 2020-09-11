#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        if (contain_one(nums)){
            int max = largest(nums), min_int;
            unordered_map<int, int> umap;
            store(umap, nums);
             
          for (int i = 1; i <= max; ++i){
              min_int = i;
              if (!umap.count(i)){
                 return min_int;
              }
          } 
           
       
            return max+1;
            
            
        }else{
            return 1;
        }
        
    }
    
    bool contain_one(vector<int>& arr){
        for (int i =0; i < arr.size(); ++i){
            if (arr[i] == 1)
                return true;
        }
        return false;
    }
    
    int largest(vector<int>& arr){
        int l = arr[0], next;
        for (int i = 1; i < arr.size(); ++i){
            next = arr[i];
           if (next > l){
               l = next;
           } 
        }
        
        return l;
    }
    
    void store(unordered_map<int, int>& umap, vector<int>& arr){
        for (int i = 0; i < arr.size(); ++i){
            umap[arr[i]] = i;
        }
    }
    
};