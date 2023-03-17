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
    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;
        ListNode* curr=head->next;
        ListNode* prev=head;
        ListNode* dummy=NULL;
        while(curr->next != NULL){
            prev->next=dummy;
            dummy=prev;
            prev=curr;
            curr=curr->next;
        }
        prev->next=dummy;
        curr->next=prev;
        return curr;
    }
};