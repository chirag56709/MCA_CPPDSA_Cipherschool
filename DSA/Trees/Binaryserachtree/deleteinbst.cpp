#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node in the BST
Node* insertBST(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insertBST(root->left, val);
    } else {
        root->right = insertBST(root->right, val);
    }
    return root;
}

// Function to search for a key in the BST
Node* searchBST(Node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return searchBST(root->left, key);
    }
    return searchBST(root->right, key);
}

// Function to find the minimum value node in the BST
Node* minvalue(Node* root) {
    Node* temp = root;
    while (temp && temp->left != nullptr) {
        temp = temp->left;
    }
    return temp;
}

// Function to find the maximum value node in the BST
Node* maxvalue(Node* root) {
    Node* temp = root;
    while (temp && temp->right != nullptr) {
        temp = temp->right;
    }
    return temp;
}
Node*deleteFromBST(Node*root,int val){
    if(root==NULL)return root;
    if(root->data==val){
    if(root->left==NULL&&root->right==NULL){
        delete root->left;return NULL;
    
    }
    if(root->left!=NULL&&root->right==NULL){
        
    }
    }
    else if(root->data>val){
        root->left=deleteFromBST(root->left,val);return;
    }
}