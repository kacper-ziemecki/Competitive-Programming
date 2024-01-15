#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

void printpriorityqueue(priority_queue<int> pq) {
    priority_queue<int> pq2 = pq;  // Create a copy of the priority queue.

    while (!pq.empty()) {
        cout << pq.top() << "\n";  // Print the top element of the priority queue.
        pq.pop();  // Remove the top element.
    }
}

int main() {
    priority_queue<int> pq;  // Declare a priority queue of integers.

    // Insert integers from 1 to 5 into the priority queue.
    for (int i = 1; i <= 5; i++)
        pq.push(i);

    cout << "The elements of the priority queue are:" << endl;
    printpriorityqueue(pq);  // Call the 'printpriorityqueue' function to print the priority queue.

    cout << "The size of the priority queue: " << pq.size() << endl;  // Print the size of the priority queue.
    cout << "The top element of the priority queue: " << pq.top() << endl;  // Print the top element of the priority queue.

    cout << "Pop the top element: " << endl;
    pq.pop();  // Remove the top element.
    printpriorityqueue(pq);  // Call the 'printpriorityqueue' function to print the updated priority queue.
}
