#include <iostream>
using namespace std;

struct listnode{
  int val;
  listnode *next;
};

listnode *reverse_list2(listnode *head, int left, int right){
  if (head == NULL)return NULL;
  listnode *prev = NULL;
  listnode *cur = head;
  while(left > 1){
    prev = head;
    cur = cur->next;
    left--;
    right--;
  }
  listnode *connection = prev;
  listnode *tail = cur;
  while(right >0){
    listnode *temp = cur->next;
    cur->next = prev;
    prev = cur;
    cur = temp;
    right--;
  }
  if (connection != NULL){
    connection->next = prev;
  }
  else{
    head = prev;
  }

  tail->next = cur;
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
  second->val = 2;
  second->next = third;
  third->val = 3;
  third->next = fourth;
  fourth->val = 4;
  fourth->next = fifth;
  fifth->val = 5;
  fifth->next = NULL;

  reverse_list2(first, 2, 4);
  while(first != NULL){
    cout << first->val << " ";   
    first = first->next;
  }
  cout << endl;
  return 0;
}
