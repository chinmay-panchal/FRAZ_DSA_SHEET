#include<bits./stdc++.h>
using namespace std;

// 1 0 1 -> 5 binary to integer 2 ki power 0 starts from right most number

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:

    int getDecimalValue(ListNode* head) {
        int ans = 0;
        while (head) {
            ans = 2 * ans + head->val;
            head = head->next;
        }
        return ans;
    }

    // int getDecimalValue(ListNode* head) {
    //     int count = 0;
    //     ListNode* slow = head;
    //     while(slow!=NULL){
    //         slow = slow->next;
    //         count++;
    //     }
    //     int ans = 0;
    //     int carry = count-1;
    //     slow = head;
    //     while(slow!=NULL){
    //         if(slow->val==1){
    //         ans += pow(2,carry);
    //         }
    //         slow = slow->next;
    //         carry--;
    //     }
    //     return ans;
    // }
};