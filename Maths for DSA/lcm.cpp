#include <iostream>

using namespace std;

// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to calculate LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 4;
    int b = 9;
    cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b) << endl;

    return 0;
}
