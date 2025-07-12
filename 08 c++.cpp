#include <iostream>
using namespace std;

int main() {
    int numbers[10], sum = 0;

    // Input 10 numbers
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        sum += numbers[i]; // Add each element to sum
    }

    // Output the sum
    cout << "Sum of all elements in the array is: " << sum << endl;

    return 0;
}
