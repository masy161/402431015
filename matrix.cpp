#include <iostream>

int main() {
    int matrix[3][3];
    int vector[3];
    int result[3] = {0};

    std::cout << "Please enter the elements of a 3x3 matrix:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Please enter the elements of a 3-element vector:" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Element [" << i << "]:";
        std::cin >> vector[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }

    std::cout << "The result of matrix-vector multiplication: ";
    for (int i = 0; i < 3; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}