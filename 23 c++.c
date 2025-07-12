#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Radius cannot be negative." << endl;
        return 1;
    }

    area = PI * radius * radius;

    cout << "Area of the circle is: " << area << endl;

    return 0;
}
