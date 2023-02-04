#include<bits./stdc++.h>
using namespace std;

class Solution {
public:

    void reverseit(vector<char> &s,int i, int j){
        if(i>=j){
            return;
        }
        swap(s[i],s[j]);
        reverseit(s,i+1,j-1);
    }
    void reverseString(vector<char>& s) {
        int i=0; int j=s.size()-1;
        reverseit(s,i,j);
        // int i=0; int j=s.size()-1;
        // while(i<j){
        //     swap(s[i],s[j]);
        //     i++;
        //     j--;
        // }
    }
};