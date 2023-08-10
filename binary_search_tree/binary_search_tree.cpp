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

int findMin(Node* root){
    if(root==nullptr){
        std::cout << "Error: Tree is empty" << std::endl;
        return -1;
    }
    else if(root->left==nullptr) return root->data;
    return findMin(root->left);
}

Node* remove(Node* root, int data){
    if(root==nullptr) return root;
    else if(data < root->data) root->left = remove(root->left, data);
    else if(data > root->data) root->right = remove(root->right, data);
    else{
        //case 1: no child
        if(root->left==nullptr && root->right==nullptr){
            delete root;
            root = nullptr;
        }
        //case 2: one child
        else if(root->left==nullptr){
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right==nullptr){
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        //case 3: two children
        else{
            int temp = findMin(root->right);
            root->data = temp;
            root->right = remove(root->right, temp); 
        }
    }
    return root;
}

bool search(Node* root, int data){
    if(root==nullptr) return false;
    else if(root->data == data) return true;
    else if(data <= root->data) return search(root->left, data);
    else return search(root->right, data);
}

int findMax(Node* root){
    if(root==nullptr){
        std::cout << "Error: Tree is empty" << std::endl;
        return -1;
    }
    else if(root->right==nullptr) return root->data;
    return findMax(root->right);
}

int findHeight(Node* root){
    if(root==nullptr) return -1;
    return std::max(findHeight(root->left), findHeight(root->right)) + 1;
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

    root = remove(root, 6);
    root = remove(root, 25);

    print(root);


    std::cout << "\nMin: " << findMin(root) << std::endl;
    std::cout << "Max: " << findMax(root) << std::endl;
}