#include<bits./stdc++.h>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size(); int m = mat[0].size();
        int count = 0;
        int rsum[n];
        int csum[m];

        // traversing in row
        for(int i=0; i<n; i++){
            rsum[i]=0;
            for(int j=0;j<m; j++){
                rsum[i]+=mat[i][j];
            }
        }

        // traversing in col
        for(int j=0; j<m; j++){
            csum[j]=0;
            for(int i=0; i<n; i++){
                csum[j]+=mat[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==1 && rsum[i]==1 && csum[j]==1){
                    count++;
                }
            }
        }

        return count;
    }
};