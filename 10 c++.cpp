#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int evenCount = 0, oddCount = 0;

    // Input 10 numbers
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];

        if (numbers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output the result
    cout << "Total even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;

    return 0;
}
