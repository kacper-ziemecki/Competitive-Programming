#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

void printstack(stack<int> s1) {
    stack<int> s2 = s1;  // Create a copy of the stack.

    while (!s2.empty()) {
        cout << s2.top() << "\n";  // Print the top element of the stack.
        s2.pop();  // Remove the top element.
    }
}

int main() {
    stack<int> s;  // Declare a stack of integers named 's'.

    // Insert integers from 1 to 5 into the stack.
    for (int i = 1; i <= 5; i++)
        s.push(i);

    cout << "The elements of the stack are:" << endl;
    printstack(s);  // Call the 'printstack' function to print the stack.

    cout << "The size of the stack: " << s.size() << endl;  // Print the size of the stack.
    cout << "The top element of the queue: " << s.top() << endl;  // Print the top element of the stack.

    cout << "Pop the top element: " << endl;
    s.pop();  // Remove the top element.
    printstack(s);  // Call the 'printstack' function to print the updated stack.
}
