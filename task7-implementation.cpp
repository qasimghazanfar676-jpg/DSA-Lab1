#include <iostream>
#include <vector>
#include <cstdlib>
#include "task7.cpp"
using namespace std;
vector<vector<int>> standardMultiply(vector<vector<int>> A, vector<vector<int>> B);
vector<vector<int>> strassenMultiply(vector<vector<int>> A, vector<vector<int>> B);
void printMatrix(vector<vector<int>> M)
 {
    for (int i = 0; i < M.size(); i++)
     {
        for (int j = 0; j < M[i].size(); j++)
         {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
 {
    //Case 1: 2x2 Matrix
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{5, 6}, {7, 8}};
    cout << "2x2 Standard Result:\n";
    printMatrix(standardMultiply(A, B));
    cout << "\n2x2 Strassen Result:\n";
    printMatrix(strassenMultiply(A, B));
    //Case 2: 4x4 Matrix
    vector<vector<int>> C = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };
    vector<vector<int>> D = {
        {1, 0, 0, 1},
        {0, 1, 1, 0},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };
    cout << "\n4x4 Standard Result:\n";
    printMatrix(standardMultiply(C, D));
    cout << "\n4x4 Strassen Result:\n";
    printMatrix(strassenMultiply(C, D));
    return 0;
}