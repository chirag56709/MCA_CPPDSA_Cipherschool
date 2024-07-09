#include<iostream>
using namespace std;
class Node{
    public:
    int data; 
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preoder(Node*root){
    if(root==NULL)
    return;
cout<<root->data<<endl;
preoder(root->left);
preoder(root->right);
}
void inoder(Node*root){
    if(root==NULL)
    return;

preoder(root->left);
cout<<root->data<<endl;
preoder(root->right);
}

void postorder(Node* root) {
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    preoder(root);
    cout<<"inoder"<<endl;
    inoder(root);
    cout<<"Postoder"<<endl;
    postorder(root);
}

