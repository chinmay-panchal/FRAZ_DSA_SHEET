#include<bits./stdc++.h>
using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int n = board.size();
        pair<int,int> position = {-1,-1};
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]=='R'){
                    position = {i,j};
                    break;
                }
            }
        }

        // north
        int i=position.first; int j=position.second;
        while(i>=0){
            if(board[i][j]=='B'){
                cout<<"hy";
                break;
            }
            if(board[i][j]=='p'){
                count++;
                break;
            }
            i--;
        }

        //west 
        i=position.first; j=position.second;
        while(j>=0){
            if(board[i][j]=='B'){
                break;
            }
            if(board[i][j]=='p'){
                count++;
                break;
            }
            j--;
        }

        // east 
        i=position.first; j=position.second;
        while(j<n){
            if(board[i][j]=='B'){
                break;
            }
            if(board[i][j]=='p'){
                count++;
                break;
            }
            j++;
        }

        // south
        i=position.first; j=position.second;
        while(i<n){
            if(board[i][j]=='B'){
                break;
            }
            if(board[i][j]=='p'){
                count++;
                break;
            }
            i++;
        }
        return count;
    }
};