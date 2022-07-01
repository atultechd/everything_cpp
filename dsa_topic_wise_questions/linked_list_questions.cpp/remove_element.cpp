#include <iostream>
using namespace std;

struct listnode{
  int val;
  listnode *next;
};

listnode * remove_ele(listnode *head, int value){
  listnode *dummy = new listnode();
  dummy->next = head;  
  listnode *cur_head = dummy;
  while(cur_head->next){
    if (cur_head->next->val == value){
      cur_head->next = cur_head->next->next;
    }
    else{
      cur_head = cur_head->next;
    }
  }
  return dummy->next;
}

int main(){
  listnode *first = NULL;
  listnode *second = NULL;
  listnode *third = NULL;
  listnode *fourth = NULL;
  listnode *fifth = NULL;

  first = new listnode();
  second = new listnode();
  third = new listnode();
  fourth = new listnode();
  fifth = new listnode();

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

  int value = 20;
  remove_ele(first, value);
  while(first != NULL){
    cout << first->val << " ";
    first = first->next;
  }
  cout << endl;
  return 0;
}