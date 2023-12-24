#include <iostream>

using namespace std;

int main() {
    // Initialize a binary number represented as an integer
    int a = 1100101;

    // Specify the position of the bit to be found
    int n = 2;

    // Use bitwise AND and left shift to isolate the nth bit
    int bitValue = a & (1 << (n - 1));

    cout << n << " Bit of " << a << " is: " << ((bitValue != 0) ? 1 : 0) << endl;

    return 0;
}
