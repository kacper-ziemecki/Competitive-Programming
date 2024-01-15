#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {4, 2, 1};  // Declare an integer array 'arr' with three elements.

    sort(arr, arr + 3);  // Use the 'sort' function to sort the elements in 'arr'.

    cout << arr[0] << " " << arr[1] << " " << arr[2];  // Print the sorted elements.

    return 0;
}
