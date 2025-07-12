#include <iostream>
using namespace std;

// Function to check even or odd
bool isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isEven(number))
        cout << number << " is even." << endl;
    else
        cout << number << " is odd." << endl;

    return 0;
}
