#include <iostream>

struct node {
    int value;
    node *next;
    node *prev;
};

node *head; 

void insertAtHead(int x){
    node *temp = new node();
    temp->value = x;
    temp->next = head;
    temp->prev = NULL;
    if(head != NULL){
        head->prev = temp;
    }
    head = temp;
}

void insertAtTail(int x){
    node *temp = new node();
    temp->value = x;
    temp->next = NULL;
    if(head == NULL){
        temp->prev = NULL;
        head = temp;
        return;
    }
    node *last = head;
    while(last->next != NULL){
        last = last->next;
    }
    last->next = temp;
    temp->prev = last;
}

void print(){
    node *temp = head;
    std::cout << "Forward: ";
    while(temp != NULL){
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}

int main(){
    head = NULL;
    insertAtHead(1);
    insertAtHead(2);
    insertAtHead(3);
    insertAtHead(4);
    insertAtHead(5);
    print();

    insertAtTail(6);
    insertAtTail(7);
    insertAtTail(8);
    print();
}