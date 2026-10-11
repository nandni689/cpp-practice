
#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

    // Push operation
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Stack after push: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }

    return 0;
}


