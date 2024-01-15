#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main() {
    unordered_map<int, int> mp;  // Declare an unordered map (hash map) of integers named 'mp'.

    // Insert key-value pairs into the unordered map.
    for (int i = 1; i <= 5; i++) {
        mp.insert({i, i * 10});
    }

    // Print the elements present in the map along with their keys.
    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;  // Print each key-value pair.
    }

    int n = 2;

    // Check if a key (2 in this case) is present in the map.
    if (mp.find(2) != mp.end()) {
        cout << n << " is present in map" << endl;
    }

    // Erase the first key-value pair in the map.
    mp.erase(mp.begin());

    // Print the elements after deleting the first element.
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;  // Print each key-value pair.
    }

    // Print the size (number of key-value pairs) of the map.
    cout << "The size of the map is: " << mp.size() << endl;

    // Check if the map is empty.
    if (!mp.empty()) {
        cout << "The map is not empty " << endl;
    } else {
        cout << "The map is empty" << endl;
    }

    // Clear all key-value pairs from the map.
    mp.clear();
    cout << "Size of the set after clearing all the elements: " << mp.size();  // Print the size of the empty map.
}
