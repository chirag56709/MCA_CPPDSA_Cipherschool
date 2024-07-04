#include <iostream>

using namespace std;

class MyStack {
public:
    int *arr;
    int top;
    int size;

    MyStack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int value) {
        if (top == size - 1) {
            cout << "Stack overflow" << endl;
        } else {
            top++;
            arr[top] = value;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            top--;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    ~MyStack() {
        delete[] arr;
    }
};

int main() {
    MyStack st(10);
    st.push(10);
    st.pop();
    cout << st.peek() << endl;

    return 0;
}
