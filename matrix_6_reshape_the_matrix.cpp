#include<bits./stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        if(n*m == r*c){
            vector<vector<int>> ans;
            int cc = 0;
            vector<int> temp;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    temp.push_back(mat[i][j]);
                    cc++;
                    if(cc==c){
                        ans.push_back(temp);
                        temp.clear();
                        cc = 0;
                    }
                }
            }
            return ans;
        }
        return mat;
    }
};