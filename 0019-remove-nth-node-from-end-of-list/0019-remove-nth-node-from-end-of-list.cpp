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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dum=new ListNode(0);
        dum->next=head;
        ListNode* t1=dum;
        ListNode* t2=dum;
        for(int i=0;i<=n;i++){
            t1=t1->next;
           
        }
        while(t1!=nullptr){
            t1=t1->next;
            t2=t2->next;
        }
        ListNode* temp=t2->next;
        t2->next=t2->next->next;
        delete temp;
        return dum->next;
    }
};