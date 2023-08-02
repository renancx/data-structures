#include <iostream>

//https://structy.net/problems/sum-list

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

int sumList(node *head){
    int sum = 0;
    while(head != NULL){
        sum += head->value;
        head = head->next;
    }
    return sum;
}

int main(){
    head = NULL;
    insert(1);
    insert(5);
    insert(14);
    insert(6);
    insert(-1);

    std::cout << "The sum of the list is: " << sumList(head) << std::endl;
}