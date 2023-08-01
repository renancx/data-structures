#include <iostream>

struct node {
    int data;
    node *next; //will store the address of the next node
};

node *head; //global variable, can be accessed anywhere

int main(){
    head = NULL; //empty list
    std::cout << head << std::endl; //a lista está vazia, então o endereço é 0
}