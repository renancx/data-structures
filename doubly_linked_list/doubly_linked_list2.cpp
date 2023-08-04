#include <iostream>

//lista duplamente encadeada ocupa mais memória do que a lista encadeada
//porque eh necessario o ponteiro para o elemento anterior

struct node {
    int value;
    node *next;
    node *prev;
};

node *head;
node *tail;

void addNode(int x){
    node *temp = new node;

    temp->value=x;
    temp->next=nullptr;
    temp->prev=tail;

    tail->next=temp;
    tail=temp;
}

void printForward(){
    node *temp1 = head;
    std::cout << "List is: ";
    while(temp1!=nullptr){
        std::cout << temp1->value << " ";
        temp1 = temp1->next;
    }
}

int main(){
    
    head = nullptr;
    tail = nullptr;
    
    node *first = new node;

    first->value=4;
    first->next=nullptr;
    first->prev=nullptr;

    head = first;
    tail = first;

    node *second = new node;

    second->value=5;
    second->next=nullptr;
    second->prev=first;

    first->next=second;
    tail=second;

    std::cout << "head: " << head->value << std::endl;
    std::cout << "tail: " << tail->value << std::endl;

    std::cout << "head->next: " << head->next->value << std::endl;
    std::cout << "tail->prev: " << tail->prev->value << std::endl;

    std::cout << "\n------------------" << std::endl;

    addNode(6);
    addNode(7);

    std::cout << "head: " << head->value << std::endl;
    std::cout << "tail: " << tail->value << std::endl;

    std::cout << "head->next: " << head->next->value << std::endl;
    std::cout << "tail->prev: " << tail->prev->value << std::endl;

    printForward();

}