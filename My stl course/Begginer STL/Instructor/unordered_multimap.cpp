#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main() {
    unordered_multimap<int, int> mp;  // Declare an unordered multimap of integers named 'mp'.

    // Insert key-value pairs into the unordered multimap.
    for (int i = 1; i <= 5; i++) {
        mp.insert({i, i * 10});
    }
    mp.insert({4, 40});  // Insert a duplicate key-value pair.

    // Print the elements present in the unordered multimap along with their keys.
    cout << "Elements present in the unordered multimap: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;  // Print each key-value pair.
    }

    int n = 2;

    // Check if a key (2 in this case) is present in the unordered multimap.
    if (mp.find(2) != mp.end()) {
        cout << n << " is present in unordered multimap" << endl;
    }

    // Erase the first key-value pair in the unordered multimap.
    mp.erase(mp.begin());

    // Print the elements after deleting the first element.
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;  // Print each key-value pair.
    }

    // Print the size (number of key-value pairs) of the unordered multimap.
    cout << "The size of the unordered multimap is: " << mp.size() << endl;

    // Check if the unordered multimap is empty.
    if (!mp.empty()) {
        cout << "The unordered multimap is not empty " << endl;
    } else {
        cout << "The unordered multimap is empty" << endl;
    }

    // Clear all key-value pairs from the unordered multimap.
    mp.clear();
    cout << "Size of the unordered multimap after clearing all the elements: " << mp.size();
}
