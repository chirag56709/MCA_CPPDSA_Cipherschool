#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertAtHead(Node*& head, int val) {
    Node* n = new Node(val);
    if (head == nullptr) {
        n->next = n;
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void deleteAtHead(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }
    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = head->next;
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}
void deletion(Node* head,int pos) {
  Node*temp = head;
  int count=1;
  while(count!=pos-1){
    temp=temp->next;count++;
  }
  Node*todelete = temp->next;
}


void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    cout << "Initial List: ";
    display(head);

    deleteAtHead(head);
    cout << "After deleting head: ";
    display(head);

    deleteAtHead(head);
    cout << "After deleting head again: ";
    display(head);

    return 0;
}
