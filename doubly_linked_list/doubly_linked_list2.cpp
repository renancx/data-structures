#include <iostream>

//lista duplamente encadeada ocupa mais memória do que a lista encadeada
//porque eh necessario o ponteiro para o elemento anterior

struct node {
    int value;
    node *next;
    node *prev;
};

node *head;

int main(){

    head = NULL;

}