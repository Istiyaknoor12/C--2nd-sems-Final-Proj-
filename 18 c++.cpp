#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Reversed number is: " << reverseNumber(number) << endl;

    return 0;
}
