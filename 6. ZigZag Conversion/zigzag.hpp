#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1)
            return s;
        
        string ans;
        int skip = 2*numRows-2;
        
        for (int i = 0; i < numRows; ++i){
            int j = i, mid = skip - i;
            while(j < s.size()){
                    ans += s[j];
                if (i != 0 && i != numRows-1 && mid < s.size()){
                    ans += s[mid];
                    mid += skip;
                }
                    
                
                j += skip;
                
            }
        }
        
        return ans;
       
    }
};