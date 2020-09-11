#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1)
            return 0;
        
        int prof = 0;
        vector<int> profs;
        vector<int>::iterator it;
        for (int i = 0; i < prices.size()-1; ++i){
            if (prices[i+1] - prices[i] > 0){
                profs.push_back(prices[i+1]-prices[i]);
            }

        }
        
        for (it = profs.begin(); it != profs.end(); ++it){
            prof += *it;
        }
        
        return prof;
    }
};