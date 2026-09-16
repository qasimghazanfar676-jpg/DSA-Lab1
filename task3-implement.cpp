
#include <iostream>
#include <vector>
#include "task3.cpp"
using namespace std;

vector<int> find(int arr[], int size, int key);

int main() {

    // Test case 1: Multiple occurrences
    int arr1[] = {2, 5, 3, 5, 7, 5};

    cout << "Test case 1: ";
    vector<int> result1 = find(arr1, 6, 5);

    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;


    // Test case 2: Key not present
    int arr2[] = {1, 2, 3, 4, 6};

    cout << "Test case 2: ";
    vector<int> result2 = find(arr2, 5, 5);
    cout << endl;


    // Test case 3: Empty array
    int arr3[1];

    cout << "Test case 3: ";
    vector<int> result3 = find(arr3, 0, 5);

    return 0;
}

