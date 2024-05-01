#include <iostream>


int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main() {
    int num1, num2;

    std::cout << "please enter first number:";
    std::cin >> num1;

    std::cout <<"please enter second number:";
    std::cin >> num2;

    int gcd = findGCD(num1, num2);
    int lcm = findLCM(num1, num2);

    std::cout << "GCD: " << gcd << std::endl;
    std::cout << "LCM: " << lcm << std::endl;

    return 0;
}