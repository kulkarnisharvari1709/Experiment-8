#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Error: Number of columns of first matrix must equal number of rows of second matrix.\n";
        return 1;
    }

    int matrix1[100][100], matrix2[100][100], product[100][100] = {0};

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            cin >> matrix2[i][j];

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            product[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "\nProduct matrix:\n";
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << product[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
