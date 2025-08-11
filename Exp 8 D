#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int matrix[100][100];

    // Input matrix
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate sums
    for (int i = 0; i < n; ++i) {
        mainDiagonalSum += matrix[i][i];             // Elements like [0][0], [1][1], ...
        secondaryDiagonalSum += matrix[i][n - i - 1]; // Elements like [0][n-1], [1][n-2], ...
    }

    cout << "\nMain Diagonal Sum: " << mainDiagonalSum << endl;
    cout << "Secondary Diagonal Sum: " << secondaryDiagonalSum << endl;

    return 0;
}
