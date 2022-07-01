#include <bits/stdc++.h>
using namespace std;

struct ListNode{
  int val;
  ListNode *next;
  // ListNode() : val(0),next(nullptr){}
  // ListNode(int x) : val(x), next(nullptr){}
  // ListNode(int x, ListNode *next) : val(x), next(next){}
};

ListNode * middle(ListNode *head){
  ListNode *fast = head;
  ListNode *slow = head;
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }

  return slow;
}

ListNode * reverse(ListNode *head){
  if (head == NULL || head->next == NULL){
    return head;
  }
  ListNode *newhead = reverse(head->next);
  ListNode *temp = head->next;
  temp->next = head;
  head->next = NULL;
  return newhead;
}

ListNode* reverseList(ListNode* head) {
  ListNode* pre = NULL;
  ListNode* next = NULL;
  while(head != NULL){
    next = head->next;
    head->next = pre;
    pre = head;
    head = next;
  }
  return pre;
}

bool is_palindrome(ListNode *head){
  if (head == NULL){
    return true;
  }
  ListNode *mid = middle(head);
  ListNode *last = reverse(mid);
  ListNode *current = head;
  while(last != NULL){
    if (last->val != current->val){
      return false;
    }
    last = last->next;
    current = current->next;
  }
  return true;
}

int main(){
  ListNode *first = NULL;
  ListNode *second = NULL;
  ListNode *third = NULL;
  ListNode *fourth = NULL;
  ListNode *fifth = NULL;

  first = new ListNode();
  second = new ListNode();
  third = new ListNode();
  fourth = new ListNode();
  fifth = new ListNode();

  first->val = 10;
  first->next = second;
  second->val = 20;
  second->next = third;
  third->val = 20;
  third->next = fourth;
  fourth->val = 30;
  fourth->next = fifth;
  fifth->val = 10;
  fifth->next = NULL;

  cout << is_palindrome(first) << endl;
  return 0;
}