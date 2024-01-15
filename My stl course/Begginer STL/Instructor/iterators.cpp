#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a vector of integers.
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Display the original vector.
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Iterators in C++ STL
    cout << "Iterators in C++ STL:" << endl;

    // 1. Iterator to the beginning of the vector.
    vector<int>::iterator it_begin = numbers.begin();

    // 2. Iterator to the end of the vector.
    vector<int>::iterator it_end = numbers.end();

    // 3. Const Iterator (Read-only iterator).
    vector<int>::const_iterator it_const = numbers.cbegin();

    // 4. Reverse Iterator (Iterates in reverse order).
    vector<int>::reverse_iterator it_reverse = numbers.rbegin();

    // 5. Const Reverse Iterator (Read-only reverse iterator).
    vector<int>::const_reverse_iterator it_const_reverse = numbers.crbegin();

    // Using an iterator to traverse and modify elements.
    cout << "Using an iterator to double the values:" << endl;
    for (vector<int>::iterator it = it_begin; it != it_end; ++it) {
        // Double the value of each element.
        *it *= 2;
    }

    // Display the modified vector.
    cout << "Modified vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Using a const iterator to access elements (read-only).
    cout << "Using a const iterator (read-only):" << endl;
    for (vector<int>::const_iterator it = it_const; it != it_end; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using a reverse iterator to iterate in reverse order.
    cout << "Using a reverse iterator (in reverse order):" << endl;
    for (vector<int>::reverse_iterator it = it_reverse; it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using a const reverse iterator (read-only, in reverse order).
    cout << "Using a const reverse iterator (read-only, in reverse order):" << endl;
    for (vector<int>::const_reverse_iterator it = it_const_reverse; it != numbers.crend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
