#include <iostream>

struct node {
    int valor;
    node *next; //will store the address of the next node
};

node *head; //global variable, can be accessed anywhere
node *renan;
node *teste;

void insert(int x){
    node *temp = new node(); //create a new node called temp
    temp->valor = x; //the value of the new node will be x
    temp->next = NULL; //the new node will point to NULL (it will be the last node)
    if(head != NULL) {
         temp->next = head; //if the list is not empty, the new node will point to the first node
    }
    head = temp; //head will point to the new node
}

int main(){
    head = NULL; //empty list
    std::cout  << head << " <- Endereco que o 'head' esta apontando quando a lista esta vazia\n"<< std::endl; //a lista está vazia, então o endereço é 0

    renan = new node(); //cria um novo nó
    renan->valor = 99;
    renan->next = NULL;

    std::cout << "============================" << std::endl;
    std::cout << "---- Inserindo o primeiro elemento na lista: 99" << std::endl;
    std::cout << renan << " <- Endereco do primeiro elemento" << std::endl; //endereço do nó
    std::cout << renan->valor << " <- Valor do primeiro elemento" << std::endl; //valor do nó
    std::cout << renan->next << " <- Endereco do proximo elemento (NULL, pq ele eh o ultimo agora) \n" << std::endl; //endereço do próximo nó (NULL)

    head = renan; //head aponta para o nó renan

    std::cout  << head << " <- Endereco que o 'head' esta apontando agora"<< std::endl; //endereço do nó renan

    //head nao tem valor, mas aponta para o nó renan
    //head nunca vai ter valor, mas vai apontar para o primeiro nó da lista

    teste = new node();
    teste->valor = 20;
    teste->next = NULL;

    renan->next = teste; //renan aponta para teste

    std::cout << "============================" << std::endl;
    std::cout << "---- Inserindo o segundo elemento na lista: 20" << std::endl;
    std::cout << teste << " <- Endereco do segundo elemento" << std::endl; //endereço do nó
    std::cout << teste->valor << " <- Valor do segundo elemento" << std::endl; //valor do nó
    std::cout << teste->next << " <- Endereco do proximo elemento (NULL, pq ele eh o ultimo agora) \n" << std::endl; //endereço do próximo nó (NULL)

    std::cout << renan->next << " <- Endereco que o 'renan' esta apontando agora"<< std::endl; //endereço do nó teste

}