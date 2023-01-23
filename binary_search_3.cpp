#include<bits./stdc++.h>
using namespace std;

int guess(int num); // isme yeh naya pehle se hi ek function banaya hua h use use karna h 
// aur leetcode 374 question h
class Solution {
public:
    int guessNumber(int n) {
        int s=1;
        int e=n;
        int mid = s+(e-s)/2;
        while(s<=e){
            if(guess(mid)==0){
                return mid;
            }
            else if(guess(mid)<0){
                e = mid;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }
};