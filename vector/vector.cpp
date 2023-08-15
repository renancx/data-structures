#include <iostream>
#include <vector>

void printVector(const std::vector<int>& v1) {
    std::cout << "[ ";
    for (const int& num : v1) {
        std::cout << num << " ";
    }
    std::cout << "]\n";
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

    //inserting an element at the nth position
    v1.insert(v1.begin() + 2, 2);
    printVector(v1);

    //removing the nth element
    v1.erase(v1.begin() + 2);
    printVector(v1);
}