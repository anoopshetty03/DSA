#include <iostream>
#include <cmath>

using namespace std;

double sqrt(double n) {
    double x = n;
    double root;
    while (true) {
        root = 0.5 * (x + (n / x)); // Similar to Root = ( X + N/X ) / 2
        if (abs(root - x) < 0.5)
            break;
        x = root;
    }
    return root;
}

int main() {
    double num = 40;
    // Display the Square Root of n
    cout << "Square Root of " << num << " is: " << sqrt(num) << endl;

    return 0;
}
