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

int main() {
    Node* root = nullptr;

    // Insert nodes into the BST
    root = insertBST(root, 8);
    root = insertBST(root, 3);
    root = insertBST(root, 10);
    root = insertBST(root, 1);
    root = insertBST(root, 6);
    root = insertBST(root, 14);
    root = insertBST(root, 4);
    root = insertBST(root, 7);
    root = insertBST(root, 13);

    // Search for a key in the BST
    int key = 7;
    Node* result = searchBST(root, key);
    if (result != nullptr) {
        cout << "Key found: " << result->data << endl;
    } else {
        cout << "Key not found." << endl;
    }

    // Find the minimum value in the BST
    Node* minNode = minvalue(root);
    if (minNode != nullptr) {
        cout << "Minimum value: " << minNode->data << endl;
    }

    // Find the maximum value in the BST
    Node* maxNode = maxvalue(root);
    if (maxNode != nullptr) {
        cout << "Maximum value: " << maxNode->data << endl;
    }

    return 0;
}
