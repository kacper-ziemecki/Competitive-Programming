#include<iostream>  // Include the input-output stream library for reading and writing to the console.
#include<vector>     // Include the vector library for using the std::vector container.
#include<algorithm>  // Include the algorithm library for using built-in functions like __builtin_popcount.

using namespace std;  // Declare that we are using the standard namespace to avoid writing std:: in front of standard library functions and objects.

int main() {  // The entry point of the program.

    int n = 7;  // Declare an integer variable 'n' and initialize it with the value 7.

    cout << __builtin_popcount(n);  // Use the built-in function '__builtin_popcount' to count the number of set bits (1s) in the binary representation of 'n' and print the result to the console using 'cout'.

    return 0;  // Return 0 to indicate successful program execution to the operating system.
}
