#include <iostream>
using namespace std;

// Function to calculate sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[10];

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    int total = sumArray(numbers, 10);
    cout << "Sum of all elements in the array is: " << total << endl;

    return 0;
}
