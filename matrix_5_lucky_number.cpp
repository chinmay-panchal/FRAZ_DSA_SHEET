#include<bits./stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            int mini = INT_MAX;
            int index = -1;
            for(int j=0; j<m; j++){
                if(matrix[i][j]<mini){
                    mini = matrix[i][j];
                    index = j;
                }
            }
            int maxi = INT_MIN;
            for(int j=0; j<n; j++){
                maxi = max(matrix[j][index],maxi);
            }
            if(maxi==mini){
                ans.push_back(mini);
            }
        }
        return ans;
    }
};