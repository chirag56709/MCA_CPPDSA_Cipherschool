#include <iostream>
using namespace std;
/*

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node*& head, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}
void insertathead(Node*&head,int val){
    Node*n=new Node(val);
    n->next=head;
    head=n;
}
void deleteAtHead(Node*& head) {
    if (head == NULL) return;
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}
void deletion(Node*&head,int val){
    Node*temp=head;if(head==NULL){
        return;
    }
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node*todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

bool search(Node*head,int key){
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==key)return true;
        temp=temp->next;
    }
    return false;
}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);

     display(head);
    if (search(head, 3)) {
        cout << "Element 3 found in the list." << endl;
    } else {
        cout << "Element 3 not found in the list." << endl;
    }
 deletion(head, 3);

    cout << "List after deleting element:";
    display(head);
    return 0;
}
*/