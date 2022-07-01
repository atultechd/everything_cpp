// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
            cout <<  "memory is free for node with data " << value << endl;
    }
};


void insertion(Node* &tail, int element, int data){
    if(tail == NULL){
        Node* new_node = new Node(data);
        tail = new_node;
        new_node->next = new_node;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
    
}

void delete_node(Node* &tail, int value){
    if(tail == NULL){
        cout << "list is empty , please check again" << endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(curr == prev) tail = NULL;
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
        
    }
}

// traversing a linked list

void print_list(Node* tail){
    Node* temp = tail;
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }
    do{
        cout << tail->data << " " ;
        tail = tail->next;
    } while(tail != temp);
    cout << endl;
}

int main() {        
    Node* tail = NULL;
    insertion(tail, 5, 10);
    print_list(tail);

    // insertion(tail, 10, 20);
    // print_list(tail);
    //  insertion(tail, 20, 30);
    // print_list(tail);
    //  insertion(tail, 10, 40);
    // print_list(tail);
    //  insertion(tail, 30, 50);
    // print_list(tail);
    
    // delete_node(tail, 40);
    // print_list(tail);
    
    // delete_node(tail, 10);
    // print_list(tail);
    
    delete_node(tail, 10);
    print_list(tail);

    return 0;
}