#include <iostream>

int main() {
    int num1, num2, gcd, lcm;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    int a = num1;
    int b = num2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    lcm = (num1 * num2) / gcd;

    std::cout << "GCD of " << num1 << " and " << num2 << " = " << gcd << std::endl;
    std::cout << "LCM of " << num1 << " and " << num2 << " = " << lcm << std::endl;

    return 0;
}
