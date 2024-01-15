#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

void printqueue(queue<int> q1) {
    queue<int> q2 = q1;  // Create a copy of the queue.

    while (!q2.empty()) {
        cout << q2.front() << "\n";  // Print the front element of the queue.
        q2.pop();  // Remove the front element.
    }
}

int main() {
    queue<int> q;  // Declare a queue of integers.

    // Insert integers from 1 to 5 into the queue.
    for (int i = 1; i <= 5; i++)
        q.push(i);

    cout << "The elements of the queue are:" << endl;
    printqueue(q);  // Call the 'printqueue' function to print the queue.

    cout << "The size of the queue: " << q.size() << endl;  // Print the size of the queue.
    cout << "The front element of the queue: " << q.front() << endl;  // Print the front element of the queue.
    cout << "The last element of the queue: " << q.back() << endl;  // Print the last element of the queue.

    cout << "Pop the front element: " << endl;
    q.pop();  // Remove the front element.
    printqueue(q);  // Call the 'printqueue' function to print the updated queue.
}
