#include <iostream>

struct node {
    int valor;
    node *next;
};

node *top = nullptr;

void push(int x){
    node *temp = new node();
    temp->valor = x;
    temp->next = top;
    top = temp;
    std::cout << "Adding the element -> " << x << std::endl;
}

void pop(){
    node *temp;
    if(top == nullptr) {
        return;
    }
    temp = top;
    std::cout << "Removing the element -> " << temp->valor << std::endl;
    top = top->next;
    delete temp;
}

int showTop(){
    return top->valor;
}

void print(){
    node *temp;
    temp = top;
    std::cout << "Stack is: ";
    while(temp!=nullptr){
        std::cout << temp->valor << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main(){

    push(1);
    push(2);
    push(3);
    print();    

    push(1);
    print();
    std::cout << "Top is: " << showTop() << std::endl;

    pop();
    push(8);
    pop();
    push(9);
    push(7);
    print();

}