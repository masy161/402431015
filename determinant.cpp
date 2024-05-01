#include <iostream>

int calculateDeterminant(int matrix[3][3]) {
    
    int determinant = (matrix[0][0] * matrix[1][1] * matrix[2][2]) +
                      (matrix[0][1] * matrix[1][2] * matrix[2][0]) +
                      (matrix[0][2] * matrix[1][0] * matrix[2][1]) -
                      (matrix[0][2] * matrix[1][1] * matrix[2][0]) -
                      (matrix[0][0] * matrix[1][2] * matrix[2][1]) -
                      (matrix[0][1] * matrix[1][0] * matrix[2][2]);

    
    return determinant;
}

int main() {
    int matrix[3][3];

    std::cout << "Please enter the elements of a 3x3 matrix:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }


    int determinant = calculateDeterminant(matrix);
    std::cout << "Determinant of the matrix: " << determinant << std::endl;

    return 0;
}