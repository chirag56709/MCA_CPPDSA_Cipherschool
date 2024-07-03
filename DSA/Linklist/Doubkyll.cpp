#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

void insertAtHead(Node*& head, int data) {
    Node* n = new Node(data);
    if (head == nullptr) {
        head = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}

void insertAtTail(Node*& head, int data) {
    Node* n = new Node(data);
    if (head == nullptr) {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);

    cout << "List after inserting at head: ";
    display(head);

    insertAtTail(head, 5);
    insertAtTail(head, 6);

    cout << "List after inserting at tail: ";
    display(head);

    return 0;
}
