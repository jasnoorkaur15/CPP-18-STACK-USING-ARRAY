//Jasnoor Kaur
//24070123049
//Batch:A2

#include <iostream>
using namespace std;

#define MAX_SIZE 5
#define ERROR_CODE -9999

class MyStack {
    int topIndex, arr[MAX_SIZE];

public:
    MyStack() {
        topIndex = -1;
    }

    void pushElement(int num);
    int popElement();
    int peekTop();
    void displayStack();
};

void MyStack::pushElement(int num) {
    if (topIndex == MAX_SIZE - 1) {
        cout << "STACK OVERFLOW: Cannot insert, stack is full." << endl;
    } else {
        arr[++topIndex] = num;
    }
}

int MyStack::popElement() {
    if (topIndex == -1) {
        cout << "STACK UNDERFLOW: Stack is empty." << endl;
        return ERROR_CODE;
    } else {
        return arr[topIndex--];
    }
}

int MyStack::peekTop() {
    if (topIndex == -1) {
        cout << "STACK UNDERFLOW: Nothing to peek." << endl;
        return ERROR_CODE;
    } else {
        return arr[topIndex];
    }
}

void MyStack::displayStack() {
    if (topIndex == -1) {
        cout << "STACK UNDERFLOW: Stack is empty." << endl;
    } else {
        cout << "Stack contents: ";
        for (int i = 0; i <= topIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    MyStack s;

    s.pushElement(7);
    s.pushElement(10);
    s.pushElement(4);

    int poppedValue = s.popElement();
    cout << "Popped value: " << poppedValue << endl;

    int topValue = s.peekTop();
    cout << "Top element: " << topValue << endl;

    s.displayStack();

    return 0;
}


/*
OUTPUT:
Popped value: 4
Top element: 10
Stack contents: 7 10
*/
