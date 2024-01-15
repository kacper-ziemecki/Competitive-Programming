#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main() {
    vector<int> v;  // Declare a vector of integers named 'v'.

    // Insert integers from 0 to 9 into the vector using push_back.
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    // Print the elements present in the vector.
    cout << "The elements in the vector: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";  // Print each element in the vector.
    }

    // Print the front element of the vector using v.front().
    cout << "\nThe front element of the vector: " << v.front();

    // Print the last element of the vector using v.back().
    cout << "\nThe last element of the vector: " << v.back();

    // Print the size (number of elements) of the vector using v.size().
    cout << "\nThe size of the vector: " << v.size();

    // Delete the last element from the vector using v.pop_back().
    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();

    // Print the vector after removing the last element.
    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";  // Print each element in the modified vector.
    }

    // Insert the value 5 at the beginning of the vector using v.insert().
    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);

    // Print the first element of the vector after insertion.
    cout << "The first element is: " << v[0] << endl;

    // Erase the first element from the vector using v.erase().
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());

    // Print the new first element of the vector.
    cout << "Now the first element is: " << v[0] << endl;

    // Check if the vector is empty using v.empty().
    if (v.empty()) {
        cout << "Vector is empty";
    } else {
        cout << "Vector is not empty" << endl;
    }

    // Clear all elements from the vector using v.clear().
    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size();
}
