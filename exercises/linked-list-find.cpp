#include <iostream>

//https://structy.net/problems/linked-list-find

struct node {
    int value;
    node *next;
};

node *head;

void insert(int x){
    node *temp = new node();
    temp->value = x;
    temp->next = NULL;
    if(head!=NULL){
        temp->next = head;
    }
    head = temp;
}

bool linkedListFind(node *head, int x){
    while (head!=NULL){
        if(head->value == x){
            return true;
        }
        else{
            head = head->next;
        }
    }
    return false;
}

int main(){
    head = NULL;
    insert(1);
    insert(5);
    insert(14);
    insert(6);
    insert(-1);

    std::cout << "Number 5 is in the list? -> " << linkedListFind(head, 5) << "\n";
    std::cout << "Number 10 is in the list? -> " << linkedListFind(head, 10) << "\n";
}