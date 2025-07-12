#include <iostream>
using namespace std;

// Function to calculate power (base^exponent)
double power(double base, int exponent) {
    double result = 1;
    int exp = (exponent < 0) ? -exponent : exponent;

    for (int i = 1; i <= exp; i++) {
        result *= base;
    }

    if (exponent < 0)
        return 1.0 / result;
    else
        return result;
}

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent (integer): ";
    cin >> exponent;

    cout << base << " raised to the power " << exponent << " is " << power(base, exponent) << endl;

    return 0;
}
