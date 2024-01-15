#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main() {
    set<int> s;  // Declare a set of integers named 's'.

    // Insert integers from 1 to 10 into the set.
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    // Print the elements present in the set.
    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";  // Print each element in the set.
    }
    cout << endl;

    int n = 2;

    // Check if a value (2 in this case) is present in the set.
    if (s.find(2) != s.end()) {
        cout << n << " is present in set" << endl;
    }

    // Remove the first element in the set.
    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";  // Print each element in the set.
    }
    cout << endl;

    // Print the size (number of elements) of the set.
    cout << "The size of the set is: " << s.size() << endl;

    // Check if the set is empty.
    if (!s.empty()) {
        cout << "The set is not empty " << endl;
    } else {
        cout << "The set is empty" << endl;
    }

    // Clear all elements from the set.
    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
}
