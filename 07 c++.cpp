#include <iostream>
using namespace std;

int main() {
    int numbers[10];

    // Input 10 numbers
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    int max = numbers[0];
    int min = numbers[0];

    // Find max and min
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max)
            max = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }

    // Output results
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}
