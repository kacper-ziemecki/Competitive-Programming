#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main() {
    unordered_set<int> s;  // Declare an unordered set of integers named 's'.

    // Insert integers from 1 to 10 into the unordered set.
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    // Print the elements present in the unordered set.
    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";  // Print each element in the set.
    }
    cout << endl;

    int n = 2;

    // Check if a value (2 in this case) is present in the unordered set.
    if (s.find(2) != s.end()) {
        cout << n << " is present in unordered set" << endl;
    }

    // Erase the first element in the unordered set.
    s.erase(s.begin());

    // Print the elements after deleting the first element.
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";  // Print each element in the set.
    }
    cout << endl;

    // Print the size (number of elements) of the unordered set.
    cout << "The size of the unordered set is: " << s.size() << endl;

    // Check if the unordered set is empty.
    if (!s.empty()) {
        cout << "The unordered set is not empty " << endl;
    } else {
        cout << "The unordered set is empty" << endl;
    }

    // Clear all elements from the unordered set, effectively making it empty.
    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}
