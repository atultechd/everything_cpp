
#include <iostream>
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

void insert_at_head(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insert_at_tail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insert_at_position(Node* &tail, Node* &head, int position, int data){
    if(position == 1){
        insert_at_head(head, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insert_at_tail(tail, data);
        return;
    }
    Node* node_to_insert = new Node(data);
    node_to_insert->next = temp->next;
    temp->next = node_to_insert;
}

// deletion in S.L.L at any position

void delete_node(Node* &head, int position){
    // deletion for first position
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // deletion at any position
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print_list(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    
    Node* head = node1;
    Node* tail = node1;

    // insert_at_head(head, 20);
    // insert_at_head(head, 30);
    // insert_at_head(head, 40);
    // insert_at_head(head, 50);
    
    // insert_at_tail(tail, 12);
    // insert_at_tail(tail, 14);
    // insert_at_tail(tail, 16);
    // insert_at_tail(tail, 18);
    // insert_at_tail(tail, 20);
    
    // print_list(head);
    
    // insert_at_position(tail, head , 7, 100);
    
    // delete_node(head, 2);
    
    // print_list(head);

    return 0;
}