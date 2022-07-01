#include <bits/stdc++.h>
using namespace std;

struct ListNode{
  int val;
  ListNode *next;
  // ListNode() : val(0),next(nullptr){}
  // ListNode(int x) : val(x), next(nullptr){}
  // ListNode(int x, ListNode *next) : val(x), next(next){}
};

int get_decimal_value(ListNode *head){
  int num = 0;
  while(head != NULL){
    num = num * 2 + head->val;
    head = head->next;
  }
  return num;
}

int main(){
  ListNode *first = NULL;
  ListNode *second = NULL;
  ListNode *third = NULL;
  ListNode *fourth = NULL;

  first = new ListNode();
  second = new ListNode();
  third = new ListNode();
  fourth = new ListNode();

  first->val = 1;
  first->next = second;
  second->val = 0;
  second->next = third;
  third->val = 1;
  third->next = fourth;
  fourth->val = 1;
  fourth->next = NULL;

  cout << get_decimal_value(first) << endl;
  return 0;
}