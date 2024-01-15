#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {1, 3, 2};  // Declare an integer array 'arr' with three elements.

    next_permutation(arr, arr + 3);  // Use the 'next_permutation' function to generate the next permutation.

    cout << arr[0] << " " << arr[1] << " " << arr[2];  // Print the elements of the new permutation.

    return 0;
}
