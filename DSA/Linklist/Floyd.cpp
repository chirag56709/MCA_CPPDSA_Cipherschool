#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void display(Node *head) {
    Node *x = head;
    while (x) {
        cout << " " << x->data << " ->";
        x = x->next;
    }
    cout << "NULL" << endl;
}

void insertAtTail(Node *&head, int key) {
    Node *newNode = new Node(key);
    if (!head) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next) temp = temp->next;  // Fixed the condition to find the last node
    temp->next = newNode;
}

void reverseAtPos(Node *&head, int pos) {
    if (!head || pos <= 1) return;
    
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;
    int count = 0;

    while (current && count < pos) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (head) {
        head->next = current;
    }

    head = prev;
}

Node* floydDetectLoop(Node *head) {
    if (!head || !head->next) {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return slow;
        }
    }

    return NULL;
}

Node* getStartingNode(Node *head) {
    if (head == NULL) return NULL;

    Node *intersection = floydDetectLoop(head);
    if (intersection == NULL) return NULL;

    Node *slow = head;
    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node *head) {
    if (head == NULL) {
        return;
    }
    Node* startOfLoop = getStartingNode(head);
    if (startOfLoop == NULL) {
        return;
    }

    Node* temp = startOfLoop;
    while (temp->next != startOfLoop) {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    // Creating a loop for testing
    head->next->next->next->next = head->next; 

    Node* loopStart = getStartingNode(head);
    if (loopStart != NULL) {
        cout << "Loop starts at node with data: " << loopStart->data << endl;
    } else {
        cout << "No loop detected" << endl;
    }

    // Breaking the loop for display purposes
    removeLoop(head);

    display(head);

    return 0;
}
