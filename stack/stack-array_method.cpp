#include <iostream>
#define MAX_SIZE 101

int stack[MAX_SIZE];
int top = -1; //empty stack when the top = -1

void push(int x){
    if(top == MAX_SIZE -1){
        std::cout << "Stack Overflow!" << std::endl;
        return; //se der overflow ele vai retornar agora e o push nao vai ocorrer
    }
    top++;
    stack[top] = x;
}

void pop(){
    if(top == -1){
        std::cout << "Stack is already empty!" << std::endl;
        return;
    }
    top--;
}

int showTop(){
    return stack[top];
}

void print(){
    std::cout << "Stack is: ";
    for(int i=0; i<=top; i++){
        std::cout << stack[i] << " ";
    }
}

int main(){
    push(2);
    push(5);
    push(10);
    push(12);
    pop();
    push(15);

    print();
    std::cout << "\nTop: " << showTop() << std::endl;

    push(9);
    push(3);

    print();
    std::cout << "\nTop: " << showTop() << std::endl;
}