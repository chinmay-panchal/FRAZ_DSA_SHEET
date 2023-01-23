#include<iostream>
using namespace std;

    // lower case mai convert karo

    // 65 - 90 A to Z
    // 97 - 122 a to z

    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
        }
        return s;
    }

    // OR

    class Solution {
        public:
        string toLowerCase(string s) {
            for(int i=0; i<s.size(); i++){
                s[i]=tolower(s[i]);
            }
            return s;
        }
    };

    // OR sabki same hi complexity h 

    class Solution {
        public:
        string toLowerCase(string s) {
            for(int i=0;i<s.size();i++){
                if(s[i]>=65&&s[i]<=90){
                    s[i]=s[i]+32;
                }
            }
            return s;
        }
    };