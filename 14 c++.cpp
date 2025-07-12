#include <iostream>
using namespace std;

// Function to find maximum of three numbers
int maxOfThree(int a, int b, int c) {
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Maximum number is: " << maxOfThree(num1, num2, num3) << endl;

    return 0;
}
