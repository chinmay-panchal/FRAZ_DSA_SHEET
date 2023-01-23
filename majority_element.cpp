#include<bits./stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // O(N) O(1) // moore's algo
        int ele = nums[0];
        int vote = 0;
        for(int i=0; i<nums.size(); i++){
            if(vote==0){
                ele = nums[i];
            }
            if(ele == nums[i]){
                vote++;
            }
            else{
                vote--;
            }
        }

        // O(NlogN) O(1)

        // sort(nums.begin(),nums.end());
        // return nums[(nums.size()/2)];

        // O(N) and O(N)
        // unordered_map<int,int> m;
        // for(int i=0; i<nums.size(); i++){
        //     m[nums[i]]++;
        //     if(m[nums[i]]>nums.size()/2){
        //         return nums[i];
        //     }
        // }

        // O(N) and O(N)
        // int freq = INT_MIN, ans = INT_MIN;
        // for(auto i: m){
        //     if(i.second>freq){
        //         ans = i.first;
        //         freq = i.second;
        //     }
        // }
        // return ans;
        return ele;
    }
};