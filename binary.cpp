#include <iostream>

std::string calculateBinary(int number) {
    std::string binary;
    while (number > 0) {
        binary = std::to_string(number % 2) + binary;
        number = number / 2;
    }
    return binary;
}

int main() {
    int num;

    std::cout << "Please enter a number:";
    std::cin >> num;

    std::string binary_num = calculateBinary(num);

    std::cout << "Binary representation of the entered number: " << binary_num << std::endl;

    return 0;
}