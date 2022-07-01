#include <iostream>
using namespace std;

struct listnode{
  int val;
  listnode *next;
};

listnode *deleteDuplicates(listnode* head) {
  listnode *cur_node = head;
  while (cur_node->next!= NULL){
    if (cur_node->val == cur_node->next->val){
      cur_node->next = cur_node->next->next;
    }
    else{
      cur_node = cur_node->next;
    }
  }
  return head;
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

  first->val = 1;
  first->next = second;
  second->val = 1;
  second->next = third;
  third->val = 2;
  third->next = fourth;
  fourth->val = 2;
  fourth->next = fifth;
  fifth->val = 3;
  fifth->next = NULL;

  deleteDuplicates(first);
  while(first != NULL){
    cout << first->val << " ";
    first = first->next;
  }
  cout << endl;
}