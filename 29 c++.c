#include <iostream>

int main() {
    double principal;
    double rate;
    double time;
    double simpleInterest;

    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (in %): ";
    std::cin >> rate;

    std::cout << "Enter the time period (in years): ";
    std::cin >> time;

    simpleInterest = (principal * rate * time) / 100.0;

    std::cout << "Simple Interest = " << simpleInterest << std::endl;

    return 0;
}
