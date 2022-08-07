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

    ListNode* swapPairs(ListNode* head) {

        if(!head || !head->next) return head;

        ListNode* dummy = new ListNode();

        ListNode* temp = dummy;

        ListNode* cur = head; 

        while(cur && cur->next){

            temp->next = cur->next;

            cur->next = temp->next->next;

            temp->next->next = cur;

            temp = cur;
            
            cur = cur->next;
        }
        return dummy->next;
    }
};