#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main() {
  multimap<int, int> mp;  // Declare a multimap with integer keys and integer values.

  // Insert key-value pairs into the multimap.
  for (int i = 1; i <= 5; i++) {
    mp.insert({i, i * 10});
  }
  
  // Insert one more key-value pair with the same key (4) to demonstrate duplicate keys.
  mp.insert({4, 40});

  // Print the elements present in the multimap.
  cout << "Elements present in the multimap: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << "\t" << it->second << endl;
  }

  int n = 2;

  // Check if a key (2 in this case) is present in the multimap.
  if (mp.find(2) != mp.end())
    cout << n << " is present in multimap" << endl;

  // Remove the first element in the multimap.
  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << "\t" << it->second << endl;
  }

  // Print the size of the multimap.
  cout << "The size of the multimap is: " << mp.size() << endl;

  // Check if the multimap is empty.
  if (!mp.empty())
    cout << "The multimap is not empty " << endl;
  else
    cout << "The multimap is empty" << endl;

  // Clear all elements from the multimap.
  mp.clear();
  cout << "Size of the multimap after clearing all the elements: " << mp.size();
}
