
#include <iostream>
#include <vector>
using namespace std;

vector<int> find(int arr[], int size, int key) {
    vector<int> result;

    if (size == 0) {
        cout << "Array is empty" << endl;
        return result;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            result.push_back(i);
        }
    }

    if (result.empty()) {
        cout << "Key not present" << endl;
    }

    return result;
}
