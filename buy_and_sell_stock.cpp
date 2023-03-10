#include<bits./stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minsofar = INT_MAX;
        int profit = 0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<minsofar){
                minsofar = prices[i];
            }
            if(prices[i]-minsofar>profit){
                profit = prices[i]-minsofar;
            }
        }
        return profit;
    }
};