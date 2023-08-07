#include <iostream>

//queue uses FIFO (first in first out) principle

struct node{
    int value;
    node *next;
};

node *head; //front
node *tail; //rear

void enqueue(int x){
    node *temp = new node();
    temp->value = x;
    temp->next = nullptr;
    if(head==nullptr && tail==nullptr){
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void dequeue(){
    node *temp = head;
    if(head==nullptr){
        return;
    }
    if(head==tail){
        head = nullptr;
        tail = nullptr;
    }
    else{
        head = head->next;
    }
    delete temp;
}

void print(){
    node *temp = head;
    while(temp!=nullptr){
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}

int main(){
    head = nullptr;
    tail = nullptr;

    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);

    print();

    dequeue();
    dequeue();
    enqueue(10);

    print();
}