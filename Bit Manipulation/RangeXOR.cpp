#include <iostream>

using namespace std;

// Function to calculate XOR from 0 to a
int xorFunction(int a) {
    if (a % 4 == 0)
        return a;
    else if (a % 4 == 1)
        return 1;
    else if (a % 4 == 2)
        return a + 1;
    return 0;
}

int main() {
    // Range XOR from a, b --> xor(b) ^ xor(a - 1)
    int a = 3;
    int b = 9;

    int ans = xorFunction(b) ^ xorFunction(a - 1);
    cout << ans << endl;

    // This is Only for check; this will give TLE for Large Numbers
    int ans2 = 0;
    for (int i = a; i <= b; i++)
        ans2 ^= i;
    cout << ans2 << endl;

    return 0;
}
