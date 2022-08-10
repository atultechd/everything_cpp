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

        if((!head) || (!head->next) || (!head->next->next)) return;

        stack<ListNode*> st;

        ListNode* ptr = head;

        int sizee = 0;

        while(ptr != NULL){

            st.push(ptr);

            sizee++;

            ptr = ptr->next;
        }

        ListNode *temp = head;

        for(int i=0; i<sizee/2; i++){

            ListNode *ele = st.top();

            st.pop();

            ele->next = temp->next;

            temp->next = ele;

            temp = temp->next->next;
        }
        
        temp->next = NULL;
    }
};