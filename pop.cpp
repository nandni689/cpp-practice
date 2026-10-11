

#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

    // Push elements
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    // Pop operation
    if (top == -1) {
        cout << "Stack Underflow";
    } else {
        cout << "Deleted element: " << stack[top] << endl;
        top--;
    }

    cout << "Stack after pop: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }

    return 0;
}
