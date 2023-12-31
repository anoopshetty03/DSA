#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /*
    Pascal's Triangle :
                          1                --> Sum = 1  -> 2^0
                       1     1             --> Sum = 2  -> 2^1
                    1     2     1          --> Sum = 4  -> 2^2
                 1     3     3     1       --> Sum = 8  -> 2^3

     Formulas -> 2 ^ n - 1
                 1  <<  (n - 1)     Both are Equivalent
     */

    int row = 4;

    // First Way:
    cout << "Sum of " << row << " Row is: " << pow(2, row - 1) << endl;

    // Second Way:
    cout << "Sum of " << row << " Row is: " << (1 << (row - 1)) << endl;

    return 0;
}
