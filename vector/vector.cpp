#include <iostream>
#include <vector>

void printVector(std::vector<int> v1){
    std::cout << "[ "; 
    for(int i = 0; i < v1.size(); i++){
        std::cout << v1[i] << " ";
    }
    std::cout << "]";
    std::cout << std::endl;
}

int main(){
    //initializing a vector
    std::vector<int> v1 = {1, 2, 3};

    //printing the vector
    printVector(v1);

    //adding an element to the end of the vector
    v1.push_back(4);
    printVector(v1);

    //removing the last element of the vector
    v1.pop_back();
    printVector(v1);

    //inserting an element at the beginning of the vector
    v1.insert(v1.begin(), 0);
    printVector(v1);

    std::cout << v1.back() << std::endl;
    std::cout << v1.front() << std::endl;

    //removing the first element of the vector
    v1.erase(v1.begin());
    printVector(v1);
}