#include <iostream>

//trees are non linear data structures that are used to store hierarchical data
//trees are made up of nodes and edges without having any cycle
//the topmost node is called root of the tree 
//the nodes that are directly under anode are called its children 

//===============

//binary search tree:
//a binary tree is a tree in which each node has at most two children
//a binary search tree is a binary tree in which the value of the left child is less than 
//the value of its parent node
//and the value of the right child is greater than the value of its parent node

class Node{
    public:
        int data;
        Node* left;
        Node* right;
};

Node *root;

Node* getNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->right = nullptr;
    newNode->left = nullptr;
    return newNode;
}

Node* insert(Node *root, int data){
    if(root==nullptr){
        root = getNewNode(data);
        return root;
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

bool search(Node* root, int data){
    if(root==nullptr) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return search(root->left, data);
    else return search(root->right, data);
}

int findMin(Node* root){
    if(root==nullptr){
        std::cout << "Tree is empty!" << std::endl;
        return -1;
    }
    while (root->left!=nullptr){
        root = root->left;
    }
    return root->data;
}

int findMax(Node* root){
    if(root==nullptr){
        std::cout << "Tree is empty!" << std::endl;
        return -1;
    }
    while(root->right!=nullptr){
        root = root->right;
    }
    return root->data;
}    

void print(Node* root){
    if(root==nullptr) return;
    print(root->left);
    std::cout << root->data << " ";
    print(root->right);
}

int main(){
    root = nullptr;

    root = insert(root, 15);
    root = insert(root, 6);
    root = insert(root, 23);
    root = insert(root, 25);
    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 4);

    print(root);
    
    std::cout << std::endl;

    std::cout << "Min: " << findMin(root) << std::endl;
    std::cout << "Max: " << findMax(root) << std::endl;
}