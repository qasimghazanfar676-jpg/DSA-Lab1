#include <iostream>
#include <vector>
#include "task6.cpp"
using namespace std;

// Declaration (tells compiler this function exists in the other file)


int main() {
    // Unique mode
    vector<int> arr1 = {1, 2, 2, 3, 4, 2, 5};
    cout << "Unique mode: " << findMode(arr1) << endl;

    // Multiple modes
    vector<int> arr2 = {1, 1, 2, 2, 3};
    cout << "Multiple modes: " << findMode(arr2) << endl;

    // Empty array
    vector<int> arr3;
    cout << "Empty array: " << findMode(arr3) << endl;

    return 0;
}