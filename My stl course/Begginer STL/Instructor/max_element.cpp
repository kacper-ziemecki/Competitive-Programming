#include<bits/stdc++.h>  // A commonly used header that includes several standard C++ libraries.
using namespace std;

int main(){
    vector<int> v {4,2,5,9,1};  // Declare and initialize a vector of integers named 'v' with values.
    
    cout << "The elements in the vector are: ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";  // Print each element of the vector separated by a space.
    }
    cout << endl;
    
    cout << "The maximum element is: " << *max_element(v.begin(), v.end());  // Find and print the maximum element in the vector.
}
