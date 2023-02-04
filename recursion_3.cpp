#include<bits./stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:

    ListNode* reverseit(ListNode* &head){
        // ListNode* prev = NULL;
        // ListNode* curr = NULL;
        // if(head!=NULL){
        //     curr = head->next;
        // }
        // while(curr!=NULL){
        //     head->next = prev;
        //     prev = head;
        //     head = curr;
        //     curr = curr->next;
        // }
        // if(head!=NULL){
        //     head->next = prev;
        // }

       
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* Newhead = reverseit(head->next);
        ListNode* headnext = head->next;
        headnext->next = head;
        head->next = NULL;
        return Newhead;
    }

    ListNode* reverseList(ListNode* head) {

        return reverseit(head);
    }
};