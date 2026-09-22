/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
       ListNode* fast;
       ListNode* slow=head;
       fast=head->next;
       while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
       } 
       ListNode* second=slow->next;
       ListNode* prev=nullptr;
       slow->next=nullptr;
       while(second!=nullptr){
         ListNode* tmp = second->next;
            second->next = prev;
            prev = second;
            second = tmp;
       }
       second=prev;
       ListNode* first=head;
      while(second!=nullptr){
        ListNode* temp=first->next;
        ListNode*temp1=second->next;
        first->next=second;
        second->next=temp;
        first=temp;
        second=temp1;
      }
      
      


    }
};