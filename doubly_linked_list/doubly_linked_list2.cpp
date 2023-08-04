#include <iostream>

//lista duplamente encadeada ocupa mais memória do que a lista encadeada
//porque eh necessario o ponteiro para o elemento anterior

struct node {
    int value;
    node *next;
    node *prev;
};

node *head;
node *tail;

int main(){
    
    head = nullptr;
    tail = nullptr;
    
    node *first = new node;

    first->value=4;
    first->next=nullptr;
    first->prev=nullptr;

    head = first;
    tail = first;

    node *second = new node;

    second->value=5;
    second->next=nullptr;
    second->prev=first;

    first->next=second;
    tail=second;

    std::cout << "head: " << head->value << std::endl;
    std::cout << "tail: " << tail->value << std::endl;

    std::cout << "head->next: " << head->next->value << std::endl;
    std::cout << "tail->prev: " << tail->prev->value << std::endl;

    delete first;
    delete second;

}