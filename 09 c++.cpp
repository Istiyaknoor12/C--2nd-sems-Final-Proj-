#include <iostream>
using namespace std;

int main() {
    int numbers[10], searchNum;
    bool found = false;

    // Input 10 numbers
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Input the number to search
    cout << "Enter the number to search: ";
    cin >> searchNum;

    // Search the number
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == searchNum) {
            cout << searchNum << " found at position " <<
