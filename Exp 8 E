#include <iostream>
using namespace std;

int main() {
    int rows, cols;

 
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100], transpose[100][100];

        cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }

   
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            transpose[j][i] = matrix[i][j];

       cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }


    cout << "\nTranspose of the Matrix:\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j)
            cout << transpose[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
