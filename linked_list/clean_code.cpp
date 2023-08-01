#include <iostream>

struct node {
    int valor;
    node *next;
};

node *head;

//insert a node at the beginning of the list
void insert(int x){
    node *temp = new node();
    temp->valor = x;
    temp->next = NULL;
    if(head != NULL) {
         temp->next = head;
    }
    head = temp;
}

//insert a node at nth position
void insert_at_nth_position(int x, int n){
    node *temp1 = new node();
    temp1->valor = x;
    temp1->next = NULL;
    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }
    node *temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

//delete a node at nth position
void remove(int n){
    node *temp1 = head;
    if(n == 1){
        head = temp1->next;
        delete temp1;
        return;
    }
    for(int i = 0; i < n-2; i++){
        temp1 = temp1->next;
    }
    node *temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
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
    head = NULL; //empty list
    
    insert(2);
    insert(4);
    insert_at_nth_position(5, 1);
    insert_at_nth_position(3, 2);
    remove(3);
    print();
}