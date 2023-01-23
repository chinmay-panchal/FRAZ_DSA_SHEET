#include<bits./stdc++.h>
using namespace std;

// sorting the sentence

class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(10);
        string word = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]>=48 && s[i]<=57){
                v[s[i]-48] = word + " "; // 51 (mtlb 3 no.) - 48 = 3
                // so us position pe hamne word store kardia
                word = ""; // kyunki store kardiya h isliye
                i++; // space aayega isliye
            }
            else{
                word+=s[i];
            }
        }
        string ans = "";
        for(int i=1; i<v.size(); i++){
            ans+=v[i];
        }
        // for(auto s: v){
        //     ans+=s;
        // }
        ans.pop_back(); // kyunki last mai space aayega isliye
        return ans;
    }
};