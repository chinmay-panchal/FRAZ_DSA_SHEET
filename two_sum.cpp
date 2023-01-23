#include<bits./stdc++.h>
using namespace std;

// approach 1 -> o(n^2) o(1) brute force two loops and return index
// approach 2 -> o(n),o(n) traverse from left and find in map (target-x) and return the index
// approach 3 -> o(nlogn),o(n) make a vector containing nums[i],i and sort it and two pointer 

class Solution { // approach 2;
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {   
        vector<int> v;
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0; i<n; i++){
            if(m.find(target-nums[i])!=m.end()){
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                break;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};

class Solution { // approach 3;
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {   
        vector<pair<int,int>> v;
        for(int i=0; i<nums.size(); i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int i=0; int j=v.size()-1;
        while(i<j){
            int sum = v[i].first+v[j].first;
            if(sum==target){
                return {v[i].second,v[j].second};
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        return {-1,-1};
    }
};