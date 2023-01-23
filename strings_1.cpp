#include<bits./stdc++.h>
using namespace std;

// jewels and stones

// brute force hi h 

int numJewelsInStones(string jewels, string stones) {
    int num = 0;
    for (int i = 0; i < jewels.size(); i++){
        num += count(stones.begin(), stones.end(), jewels[i]);
    }
    return num;
}

// OR yeh bhi same hi h bas isme count function ki jagah for loop h code bada kardiya aur kuch nahi 
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i=0; i<jewels.size(); i++){
            for(int j=0; j<stones.size(); j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};