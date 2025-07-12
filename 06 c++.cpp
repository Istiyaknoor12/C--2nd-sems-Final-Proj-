#include <iostream>
using namespace std;

int main() {
    int numbers[10];

    // Input 10 numbers
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Print the numbers
    cout << "\nThe numbers you entered are:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}
