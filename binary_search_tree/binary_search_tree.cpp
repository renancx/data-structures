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



int main(){
    root = nullptr;


}