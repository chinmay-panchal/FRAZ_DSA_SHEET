#include<bits./stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        // formula yahi the ki reverse aur invert karne ki zaroorat nahi h simply low aur high jab same hotoh tab 1 se minus so invert 
        // hojayega and low++ and high-- toh karna hi h 
        
        int n = image.size();
        for(int i=0; i<n; i++){
            int low = 0;
            int high = n-1;
            while(low<=high){
                if(image[i][low]==image[i][high]){
                    image[i][low]=1-image[i][high];
                    image[i][high]=image[i][low];
                }
                low++;
                high--;
            }
        }
        // o(n^2)
        // pehle flip 
        // int n = image.size();
        // for(int i=0; i<n; i++){
        //     reverse(image[i].begin(),image[i].end());
        // }

        // // ab invert(0 ki jagah 1 and 1 ki jagah 0)
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         if(image[i][j]==0){
        //             image[i][j]=1;
        //         }
        //         else{
        //             image[i][j]=0;
        //         }
        //     }
        // }
        return image;
    }
};