#include <vector>
using namespace std;
// Standard naive matrix multiplication
vector<vector<int>> standardMultiply(vector<vector<int>> A, vector<vector<int>> B)
 {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
         {
            for (int k = 0; k < n; k++)
             {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}
// Strassen Multiplication for 2x2 base
vector<vector<int>> strassenMultiply(vector<vector<int>> A, vector<vector<int>> B) 
{
    int n = A.size();
    if (n != 2) {
        return standardMultiply(A, B);
    }
    int p1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int p2 = (A[1][0] + A[1][1]) * B[0][0];
    int p3 = A[0][0] * (B[0][1] - B[1][1]);
    int p4 = A[1][1] * (B[1][0] - B[0][0]);
    int p5 = (A[0][0] + A[0][1]) * B[1][1];
    int p6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    int p7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    vector<vector<int>> C(2, vector<int>(2));
    C[0][0] = p1 + p4 - p5 + p7;
    C[0][1] = p3 + p5;
    C[1][0] = p2 + p4;
    C[1][1] = p1 - p2 + p3 + p6;
    return C;
}