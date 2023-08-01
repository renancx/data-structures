#include <iostream>

struct node {
    int valor;
    node *next; //will store the address of the next node
};

node *head; //global variable, can be accessed anywhere

// insert a node at the beginning of the list
void insert(int x){
    node *temp = new node(); //create a new node called temp
    temp->valor = x; //the value of the new node will be x
    temp->next = NULL; //the new node will point to NULL (it will be the last node)
    if(head != NULL) {
         temp->next = head; //if the list is not empty, the new node will point to the first node
    }
    head = temp; //head will point to the new node
}

//insert a node at nth position
void insert_at_nth_position(int x, int n){
    node *temp1 = new node(); //create a new node called temp1
    temp1->valor = x; //the value of the new node will be x
    temp1->next = NULL; //the new node will point to NULL (it will be the last node)
    if(n == 1){
        temp1->next = head; //if the position is 1, the new node will point to the first node
        head = temp1; //head will point to the new node
        return;
    }
    node *temp2 = head; //create a new node called temp2 and make it point to the first node
    for(int i = 0; i < n-2; i++){ //loop through the list until the node before the nth position
        temp2 = temp2->next; //temp2 will point to the next node
    }
    temp1->next = temp2->next; //the new node will point to the node that temp2 is pointing to
    temp2->next = temp1; //temp2 will point to the new node
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

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    print();

    insert_at_nth_position(99, 1);
    insert_at_nth_position(100, 2);
    print();
}