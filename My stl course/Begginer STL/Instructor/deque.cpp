#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

void printdeque(deque<int> dq)
{
    deque<int>::iterator it;  // Declare an iterator for the deque.
    
    for(it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";  // Print each element of the deque separated by a space.
    }
    
    cout << endl;  // Print a newline to separate the output.
}

int main()
{
    deque<int> dq;  // Declare a deque of integers named 'dq'.
    
    dq.push_back(10);     // Add elements to the back of the deque.
    dq.push_back(20);
    dq.push_front(30);    // Add elements to the front of the deque.
    dq.push_front(40);
    dq.push_front(50);
    
    cout << "The elements in the deque are: ";
    printdeque(dq);  // Call the 'printdeque' function to print the contents of the deque.
    
    cout << "The size of the deque is: " << dq.size() << endl;  // Print the size of the deque.
    cout << "The first element in the deque: " << dq.front() << endl;  // Print the first element of the deque.
    
    cout << "Deleting the first element" << endl;
    dq.pop_front();  // Remove the first element from the deque.
    printdeque(dq);  // Print the updated deque.
    
    cout << "The last element of the deque: " << dq.back() << endl;  // Print the last element of the deque.
    
    cout << "Deleting the last element" << endl;
    dq.pop_back();  // Remove the last element from the deque.
    printdeque(dq);  // Print the updated deque.
}
