#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main() {
  multiset<int> s;  // Declare a multiset of integers named 's'.

  // Insert integers from 1 to 10 into the multiset.
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }
  
  // Insert one more integer (5) to demonstrate duplicates.
  s.insert(5);

  // Print the elements present in the multiset.
  cout << "Elements present in the multiset: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";  // Print each element in the multiset.
  }
  cout << endl;

  int n = 2;

  // Check if a value (2 in this case) is present in the multiset.
  if (s.find(2) != s.end())
    cout << n << " is present in multiset" << endl;

  // Remove the first element in the multiset.
  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";  // Print each element in the multiset.
  }
  cout << endl;

  // Print the size (number of elements) of the multiset.
  cout << "The size of the multiset is: " << s.size() << endl;

  // Check if the multiset is empty.
  if (!s.empty())
    cout << "The multiset is not empty " << endl;
  else
    cout << "The multiset is empty" << endl;

  // Clear all elements from the multiset.
  s.clear();
  cout << "Size of the multiset after clearing all the elements: " << s.size();
}
