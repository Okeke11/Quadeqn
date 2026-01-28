#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // 1. Input coefficients
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Check if 'a' is 0 (Linear equation, not quadratic)
    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
        return 0;
    }

    // 2. Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // 3. Determine the nature of the roots based on the discriminant
    
    // Case 1: Two distinct real roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << root1 << endl;
        cout << "x2 = " << root2 << endl;
    }
    
    // Case 2: One repeated real root
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "x1 = x2 = " << root1 << endl;
    }

    // Case 3: Complex roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}