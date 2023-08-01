#include <iostream>

struct node {
    int data;
    node *next; //will store the address of the next node
};

node *head; //global variable, can be accessed anywhere
node *renan;
node *teste;

int main(){
    head = NULL; //empty list
    std::cout  << head << " <- Endereco que o 'head' esta apontando quando a lista esta vazia"<< std::endl; //a lista está vazia, então o endereço é 0

    renan = new node(); //cria um novo nó
    renan->data = 99;
    renan->next = NULL;

    std::cout << "\n ---- Inserindo o primeiro elemento na lista: 99" << std::endl;
    std::cout << renan << " <- Endereco do primeiro elemento" << std::endl; //endereço do nó
    std::cout << renan->data << " <- Valor do primeiro elemento" << std::endl; //valor do nó
    std::cout << renan->next << " <- Endereco do proximo elemento (NULL, pq ele eh o ultimo) \n" << std::endl; //endereço do próximo nó (NULL)

    head = renan; //head aponta para o nó renan
    std::cout  << head << " <- Endereco que o 'head' esta apontando agora"<< std::endl; //endereço do nó renan
    std::cout << renan->next << " <- Endereco que o renan->next esta apontando eh zero pq ele eh o ultimo elemento da lista"<< std::endl; //endereço do próximo nó (NULL)

    //head nao tem valor, mas aponta para o nó renan
    //head nunca vai ter valor, mas vai apontar para o primeiro nó da lista

    teste = new node();
    teste->data = 20;
    teste->next = NULL;

    renan = teste; //renan aponta para teste

    std::cout << renan << " <- Endereco que o renan->next esta apontando eh zero pq ele eh o ultimo elemento da lista"<< std::endl; //endereço do próximo nó (NULL)

}