#include <iostream>
using namespace std;

struct listnode{
  int val;
  listnode *next;
};

bool hasCycle(listnode *head) {
  if(head==NULL ) return false;
    listnode *walker = head;
    listnode *runner = head;
    while(runner->next!= NULL && runner->next->next!=NULL ) {
        walker = walker->next;
        runner = runner->next->next;
        if(walker==runner) return true;
    }
    return false;
}

int main(){
  listnode *first = NULL;
  listnode *second = NULL;
  listnode *third = NULL;
  listnode *fourth = NULL;

  first = new listnode();
  second = new listnode();
  third = new listnode();
  fourth = new listnode();

  first->val = 1;
  first->next = second;
  second->val = 2;
  second->next = third;
  third->val = 3;
  third->next = fourth;
  fourth->val = 4;
  fourth->next = NULL;

  cout << hasCycle(first) << endl;
  return 0;
}