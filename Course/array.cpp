array<int> arr; // array of ints
// they are a tiny bit faster then vector (dynamic arrays)
array<int, 5> arr; // this is the actual proper way of initializing

//example 1
int n = 5;
array<int, n> arr;

//example 2
constexpr int n = 5;
array<int, n> arr;

//example 3
array<int, 1e9> arr{9, 90, 324, 32434}

arr.begin()
arr.end()

arr.size()

arr.front() // returns the first element in the array
arr.back() // returns the last element in the array
arr[i] // returns the element at the index "i"
arr.get(i)  //the same as arr[i] but 

arr.fill(6) // fills the array with the value that is passed to the method

array<int, 1e9> arr2{1,2,3,4};
arr.swap(arr2);