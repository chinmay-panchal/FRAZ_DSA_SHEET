#include<bits./stdc++.h>
using namespace std;

class Solution {
public:

    int binarysearch(int s, int e, vector<int>&array, int target){
        int mid = s+(e-s)/2;
        if(s>e){
            return -1;
        }
        if(array[mid]==target){
            return mid;
        }
        else if(array[mid]<target){
            return binarysearch(mid+1,e,array,target);
        }
        else{
            return binarysearch(s,mid-1,array,target);
        }
        
    }

    int search(vector<int>& array, int target) {
        int s = 0; 
        int e = array.size()-1;
        return binarysearch(s,e,array,target);
        // while(s<=e){
        //     if(array[mid]==target){
        //         return mid;
        //     }
        //     else if(array[mid]<target){
        //         s=mid+1;
        //     }
        //     else{
        //         e=mid-1;
        //     }
        //     mid = s+(e-s)/2;
        // }
        // return -1;
    }
};