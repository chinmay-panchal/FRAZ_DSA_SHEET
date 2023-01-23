#include<bits./stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& array) {
        int s=0; int e = array.size()-1;
        int mid = s+(e-s)/2;
        while(s<e){
            if(array[mid]>array[mid+1]){
                e = mid;
            }
            else // if(array[mid]<array[mid+1])
            {
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return s;
    }
};