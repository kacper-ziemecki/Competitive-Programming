#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main() {
  map<int, int> mp;  // Declare a map with integer keys and integer values.

  // Insert key-value pairs into the map.
  for (int i = 1; i <= 5; i++) {
    mp.insert({i, i * 10});
  }

  // Print the elements present in the map.
  cout << "Elements present in the map: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << "\t" << it->second << endl;
  }

  int n = 2;

  // Check if a key (2 in this case) is present in the map.
  if (mp.find(2) != mp.end())
    cout << n << " is present in the map" << endl;

  // Remove the first element in the map.
  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << "\t" << it->second << endl;
  }

  // Print the size of the map.
  cout << "The size of the map is: " << mp.size() << endl;

  // Check if the map is empty.
  if (!mp.empty())
    cout << "The map is not empty " << endl;
  else
    cout << "The map is empty" << endl;

  // Clear all elements from the map.
  mp.clear();
  cout << "Size of the map after clearing all the elements: " << mp.size();
}
