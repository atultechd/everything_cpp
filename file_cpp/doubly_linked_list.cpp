// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;
    // constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
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

void insert_at_head(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insert_at_tail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insert_at_position(Node* &tail, Node* &head, int position, int data){
    if(position == 1){
        insert_at_head(head,tail,data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insert_at_tail(head,tail, data);
        return;
    }
    Node* node_to_insert = new Node(data);
    node_to_insert->next = temp->next;
    temp->next->prev = node_to_insert;
    temp->next = node_to_insert;
    node_to_insert->prev = temp;
}

void delete_node(Node* &head, int position){
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;  
        // curr->next->prev = 
        curr->next = NULL;
        delete curr;
    }
}

// traversing a linked list
void print_list(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

// gives length of a linked list
int get_length(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    // insert_at_head(head,tail, 20);
    // insert_at_head(head,tail, 30);
    // insert_at_head(head,tail, 40);
    // insert_at_tail(head,tail, 500);
    // insert_at_tail(head,tail, 600);
    // insert_at_tail(head,tail, 700);
    // insert_at_position(tail, head, 2, 1000);
    // insert_at_position(tail, head, 8, 2000);
    // print_list(head);
    // delete_node(head, 1);
    // print_list(head);
    // cout << "length of doubly linked list is " << get_length(head) <<endl;

    return 0;
}