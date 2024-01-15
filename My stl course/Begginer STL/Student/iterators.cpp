#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Iterators in C++ STL:" << endl;

    vector<int>::iterator it_begin = numbers.begin();
    vector<int>::iterator it_end = numbers.end();
    vector<int>::const_iterator it_const = numbers.cbegin();
    vector<int>::reverse_iterator it_reverse = numbers.rbegin();
    vector<int>::const_reverse_iterator it_const_reverse = numbers.crbegin();

    cout << "Using an iterator to double the values:" << endl;
    for (vector<int>::iterator it = it_begin; it != it_end; ++it) {
        *it *= 2;
    }

    cout << "Modified vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Using a const iterator (read-only):" << endl;
    for (vector<int>::const_iterator it = it_const; it != it_end; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Using a reverse iterator (in reverse order):" << endl;
    for (vector<int>::reverse_iterator it = it_reverse; it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Using a const reverse iterator (read-only, in reverse order):" << endl;
    for (vector<int>::const_reverse_iterator it = it_const_reverse; it != numbers.crend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
