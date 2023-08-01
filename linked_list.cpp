#include <iostream>

struct node {
    int data;
    node *next; //will store the address of the next node
};

node *head; //global variable, can be accessed anywhere
node *renan;

int main(){
    head = NULL; //empty list
    std::cout << head << std::endl; //a lista está vazia, então o endereço é 0

    renan = new node(); //cria um novo nó
    renan->data = 99;
    renan->next = NULL;
    std::cout << renan << std::endl; //endereço do nó

    head = renan; //head aponta para o nó renan
    std::cout << head << std::endl; //endereço do nó renan

    //head nao tem valor, mas aponta para o nó renan
    //head nunca vai ter valor, mas vai apontar para o primeiro nó da lista

    

}