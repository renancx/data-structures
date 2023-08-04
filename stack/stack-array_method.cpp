#include <iostream>
#define MAX_SIZE 101

int stack[MAX_SIZE];
int top = -1; //empty stack when the top = -1

void Push(int x){
    if(top == MAX_SIZE -1){
        std::cout << "Stack Overflow!" << std::endl;
        return; //se der overflow ele vai retornar agora e o push nao vai ocorrer
    }
    top++;
    stack[top] = x;
}

void Pop(){
    if(top == -1){
        std::cout << "Stack is already empty!" << std::endl;
        return;
    }
    top--;
}

int Top(){
    return stack[top];
}

int main(){
    Push(2);
    Push(5);
    Push(10);
    Push(12);
    Pop();
    Push(15);

    std::cout << "Top: " << Top() << std::endl;

    return 0;
}