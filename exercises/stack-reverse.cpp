#include <iostream>
#include <stack>
#include <cstring> //strlen()

void reverse(char *C, int n){
    std::stack<char> s;
    for(int i=0; i<n; i++){
        s.push(C[i]);
    }

    for(int i=0; i<n; i++){
        C[i] = s.top(); //overwrite the character at index i
        s.pop();
    }
}

int main(){
    char C[51];
    std::cout << "Enter a string: ";
    gets(C);
    reverse(C, strlen(C));
    std::cout << "Output: " << C << std::endl;
}