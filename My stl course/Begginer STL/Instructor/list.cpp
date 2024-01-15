#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

void printlist(list<int> li)
{
    list<int>::iterator it;  // Declare an iterator for the list.
    
    for(it = li.begin(); it != li.end(); it++)
    {
        cout << *it << " ";  // Print each element of the list separated by a space.
    }
    
    cout << endl;  // Print a newline to separate the output.
}

int main()
{
    list<int> li;  // Declare a doubly-linked list of integers named 'li'.
    
    li.push_back(10);     // Add elements to the back of the list.
    li.push_back(20);
    li.push_front(30);    // Add elements to the front of the list.
    li.push_front(40);
    li.push_front(50);
    
    cout << "The elements in the list are: ";
    printlist(li);  // Call the 'printlist' function to print the contents of the list.
    
    cout << "Reversing the list: ";
    li.reverse();  // Reverse the order of elements in the list.
    printlist(li);  // Print the reversed list.
    
    cout << "Sorting the list: ";
    li.sort();  // Sort the elements in ascending order.
    printlist(li);  // Print the sorted list.
    
    cout << "The size of the list is: " << li.size() << endl;  // Print the size of the list.
    cout << "The first element in the list: " << li.front() << endl;  // Print the first element of the list.
    
    cout << "Deleting the first element" << endl;
    li.pop_front();  // Remove the first element from the list.
    printlist(li);  // Print the updated list.
    
    cout << "The last element of the list: " << li.back() << endl;  // Print the last element of the list.
    
    cout << "Deleting the last element" << endl;
    li.pop_back();  // Remove the last element from the list.
    printlist(li);  // Print the updated list.
}
