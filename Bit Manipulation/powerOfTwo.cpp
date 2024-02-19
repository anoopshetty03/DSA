#include<limits.h>

class Solution {
public:
    //Method 1:
    bool isPowerOfTwo(int n) {
       // T.C -> O(logn)
       if(n == 0)
        return false;

       while(n%2 == 0)  
           n /=2;       

        return n == 1;  
    }
    //Method 2:
    bool isPowerOfTwo(int n) {
    // T.C -> O(1)
      return n > 0 ? !(n & n-1) : false;
    }
};
