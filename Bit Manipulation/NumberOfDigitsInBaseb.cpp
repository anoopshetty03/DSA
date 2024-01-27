#include<iostream>
using namespace std;
    int main() {
        int n = 8;
        int num = n;
        int count = 0;
        while(n > 0){
            n = n >> 1;
            count ++;
        }
        cout<<"Number of Digits of "<<num<<" in Binary Format are: "<<count<< endl;
    }

