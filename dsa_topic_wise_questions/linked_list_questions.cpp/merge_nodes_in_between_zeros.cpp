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

    ListNode* mergeNodes(ListNode* head) {

        if(!head->next) return NULL;

        ListNode *temp = head->next;

        int count = 0;

        while(temp->val != 0){

            count += temp->val;

            temp =temp->next;
        }

        head->next->val = count;

        head->next->next = mergeNodes(temp);
        
        return head->next;
    }
};