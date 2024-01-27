#include<iostream>
using namespace std;

int main( ) {
    int n = 9;
    int ans = 0;
    int base = 5;
    while(n > 0){
        // Find Last Digit of Binary number by and with 1
        int lastDigit = n & 1;
        ans = lastDigit * base;
        base  = base * 5;
        n = n >> 1;
    }

    cout<<"Ans is: "<<ans<<endl;
}

