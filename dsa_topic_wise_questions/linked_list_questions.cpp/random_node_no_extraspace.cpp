#include <iostream>
using namespace std;

struct listnode{
  int val;
  listnode *next;
};

int get_random(listnode *head){
  listnode *cur = head;
  listnode *ans = NULL;
  int i = 1;
  while(cur != NULL){
    if (rand()%i == 0){
      ans = cur;
    }
    i++;
    cur = cur->next;
  }
  return ans->val;
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
  second->val = 2;
  second->next = third;
  third->val = 3;
  third->next = fourth;
  fourth->val = 4;
  fourth->next = fifth;
  fifth->val = 5;
  fifth->next = NULL;

  cout << get_random(first) << endl;
  return 0;
}