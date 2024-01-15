#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main() {
    unordered_multiset<int> s;  // Declare an unordered multiset of integers named 's'.

    // Insert integers from 1 to 10 into the unordered multiset.
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }
    s.insert(5);  // Insert a duplicate value (5) into the multiset.

    // Print the elements present in the unordered multiset.
    cout << "Elements present in the unordered multiset: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";  // Print each element in the multiset.
    }
    cout << endl;

    int n = 2;

    // Check if a value (2 in this case) is present in the unordered multiset.
    if (s.find(2) != s.end()) {
        cout << n << " is present in unordered multiset" << endl;
    }

    // Erase the first occurrence of the value 1 in the unordered multiset.
    s.erase(s.begin());

    // Print the elements after deleting the first occurrence of 1.
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";  // Print each element in the multiset.
    }
    cout << endl;

    // Print the size (number of elements) of the unordered multiset.
    cout << "The size of the unordered multiset is: " << s.size() << endl;

    // Check if the unordered multiset is empty.
    if (!s.empty()) {
        cout << "The unordered multiset is not empty " << endl;
    } else {
        cout << "The unordered multiset is empty" << endl;
    }

    // Clear all elements from the unordered multiset.
    s.clear();
    cout << "Size of the unordered multiset after clearing all the elements: " << s.size();
}
