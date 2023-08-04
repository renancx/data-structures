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

int main(){

}