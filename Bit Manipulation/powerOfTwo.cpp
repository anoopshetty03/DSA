#include<limits.h>

class Solution {
public:
    bool isPowerOfTwo(int n) {
       // T.C -> O(logn)
       if(n == 0)
        return false;

       while(n%2 == 0)  
           n /=2;       

        return n == 1;  
    }
};
