#include <iostream>

struct node {
    int valor;
    node *next;
};

node *head;

void insert(int x){
    node *temp = new node();
    temp->valor = x;
    temp->next = NULL;
    if(head != NULL) {
         temp->next = head;
    }
    head = temp;
}

void reverse(){
    node *current, *prev, *next;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next; //store the address of the next node
        current->next = prev; //reverse the current node
        prev = current; //move prev and current one step forward
        current = next; 
    }
    head = prev;
}

void print(){
    node *temp = head;
    std::cout << "List is: ";
    while(temp != NULL){
        std::cout << temp->valor << " ";
        temp = temp->next;
    }
    std::cout << std::endl; 
}

int main(){
    head = NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(5);
    print();
    reverse();
    print();
}