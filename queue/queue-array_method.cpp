#include <iostream>
#define SIZE 10

int array[SIZE];
int front = -1;
int rear = -1;

bool isEmpty(){
    if(front == -1 && rear == - 1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(rear == SIZE -1){
        return true;
    } 
    else {
        return false;
    }
}

int enqueue(int x){
    if(isFull()){
        std::cout << "Queue is full" << std::endl;
        return -1;
    }
    else if(isEmpty()){
        front = 0;
        rear = 0;
    }
    else{
        rear++;
    }
    array[rear] = x;
    return 0;
}

void dequeue(){ //just move the front to the next element
    if(isEmpty()){
        std::cout << "Queue is empty" << std::endl;
    }
    else if(front == rear){
        front = -1;
        rear = -1;
    }
    else{
        front++;
    }
}

void print(){
    std::cout << "Queue is: ";
    for(int i = front; i <= rear; i++){
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    print();
    enqueue(5);
    enqueue(6);
    dequeue();

    print();
}