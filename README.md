# Experiment-8
EXP 8A
✅ Aim:
To write a C++ program that:

Accepts a 2D matrix (array) of user-defined size (rows × columns),

Stores the elements entered by the user,

Displays the matrix in a proper 2D format.

💻 Software Used:
C++

📌 Algorithm (Steps):
Start the program.

Prompt the user to enter the number of rows and columns.

Declare a 2D array matrix[100][100] to hold the elements.

Use nested loops:

The outer loop iterates over each row.

The inner loop iterates over each column in the current row.

Inside the inner loop, prompt the user to input the value at each position [i][j].

After storing the values, use nested loops again to print the matrix in a structured (2D) format.

End the program.

📖 Theory:
In C++, a 2D array is used to store tabular data — data in the form of rows and columns. A matrix is a common application of 2D arrays.

The program first takes input from the user regarding the size of the matrix (number of rows and columns).

Then, it uses nested for loops to input and store each element of the matrix.

Another pair of nested loops is used to display the matrix in a structured format, where:

The outer loop controls the rows,

The inner loop controls the columns.

This program is useful for beginners learning:

Arrays,

Nested loops,

Basic input/output in C++.

EXP 8B
✅ Aim:
To write a C++ program that:

Accepts two matrices of user-defined size (same dimensions),

Calculates their sum element-wise,

Displays the resultant matrix.

💻 Software Used:
C++

📌 Algorithm (Steps):
Start the program.

Prompt the user to enter the number of rows and columns.

Declare three 2D arrays:

matrix1[100][100] to store the first matrix,

matrix2[100][100] to store the second matrix,

sum[100][100] to store the result of addition.

Use nested loops to input elements of the first matrix.

Use nested loops to input elements of the second matrix.

Add corresponding elements from matrix1 and matrix2, and store the result in sum[i][j].

Use nested loops to print the resulting sum matrix.

End the program.

📖 Theory:
Matrix addition is a basic operation in linear algebra where corresponding elements of two matrices are added together to form a new matrix.

Rules for Matrix Addition:
Both matrices must have the same number of rows and columns.

The element at position [i][j] in the result is:


sum[i][j]=matrix1[i][j]+matrix2[i][j]
In this program:

The user inputs two matrices of the same size.

Using nested for loops, the program performs the addition.

The resulting matrix is displayed in a tabular (2D) format.

This helps students understand:

2D arrays

Nested loops

Basic matrix operations

Input/output formatting

EXP 8C
✅ Aim:
To write a C++ program that:

Takes input for two matrices from the user,

Checks if multiplication is possible (i.e., the number of columns in the first matrix equals the number of rows in the second),

Performs matrix multiplication,

Displays the resulting product matrix.

💻 Software Used:
C++

📌 Algorithm (Steps):
Start the program.

Prompt the user to enter the number of rows and columns for both matrices.

Check if matrix multiplication is possible (i.e., if columns of matrix1 == rows of matrix2). If not, display an error and terminate.

Declare the matrices: matrix1, matrix2, and product.

Input the elements of the first and second matrices using nested for loops.

Initialize the product matrix with zeros.

Multiply the matrices:

Use three nested loops:

Outer loop for rows of the first matrix (i)

Middle loop for columns of the second matrix (j)

Inner loop for the summation (k)

Multiply matrix1[i][k] * matrix2[k][j] and add to product[i][j]

Display the product matrix.

End the program.

📖 Theory:
➤ Matrix Multiplication Rule:
If:

Matrix A is of size r1 × c1,

Matrix B is of size r2 × c2,
Then, the matrices can be multiplied only if c1 == r2,
and the result will be a matrix of size r1 × c2.

Each element of the product matrix is calculated as:


product[i][j]= 
k=0
∑
c1−1
​
 (matrix1[i][k]×matrix2[k][j])
This process involves:

Taking the dot product of the i-th row of the first matrix with the j-th column of the second matrix.

➤ Applications:
Matrix multiplication is used in:

Graphics and game development

Data transformations

Machine learning

Physics simulations

Cryptography

EXP 8D
✅ Aim:
To write a C++ program that:

Takes a square matrix (n × n) as input from the user,

Calculates and displays:

The sum of the main diagonal,

The sum of the secondary diagonal.

💻 Software Used:
C++

📌 Algorithm (Steps):
Start the program.

Ask the user to input the size n of the square matrix.

Declare a 2D array matrix[n][n].

Input all the elements using nested for loops.

Initialize two variables: mainDiagonalSum and secondaryDiagonalSum to 0.

Loop from i = 0 to n - 1, and in each iteration:

Add matrix[i][i] to mainDiagonalSum

Add matrix[i][n - i - 1] to secondaryDiagonalSum

Print both sums.

End the program.

📖 Theory:
➤ Diagonal Elements in a Square Matrix:
Given a square matrix:

[ a00  a01  a02 ]
[ a10  a11  a12 ]
[ a20  a21  a22 ]
Main Diagonal: Elements from top-left to bottom-right → a00, a11, a22
→ Condition: i == j

Secondary Diagonal: Elements from top-right to bottom-left → a02, a11, a20
→ Condition: i + j == n - 1 or use: matrix[i][n - i - 1]

This program demonstrates how to access and sum diagonal elements efficiently using a single loop.

EXP 8C
✅ **Aim:
To write a C++ program that:**

Accepts a matrix of size rows × columns from the user,

Computes its transpose,

Displays both the original and transposed matrices.

💻 Software Used:
C++

📌 Algorithm (Steps):
Start the program.

Ask the user to enter the number of rows and columns.

Declare two 2D arrays:

matrix[100][100] for the original matrix,

transpose[100][100] for storing the transposed matrix.

Use nested loops to input elements into the original matrix.

Use nested loops to compute the transpose:

Assign transpose[j][i] = matrix[i][j]

Display the original matrix.

Display the transposed matrix.

End the program.

📖 Theory:
➤ What is a Transpose of a Matrix?
The transpose of a matrix is formed by interchanging its rows and columns.

➤ Transpose Rule:
transpose[j][i]=matrix[i][j]
This operation is widely used in:

Linear algebra,

Image processing,

Machine learning (for manipulating datasets and vectors),

Data transformation.






The array size is statically defined as 100x100 for simplicity, though dynamic memory allocation would be better for large or varying sizes.
