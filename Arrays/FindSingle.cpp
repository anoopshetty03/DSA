// find the array element that appears only once 
#include <iostream> 
using namespace std; 
  
int findSingle(int ar[], int ar_size) 
{ 
    // Do XOR of all elements and return 
    int res = ar[0]; 
    for (int i = 1; i < ar_size; i++) 
        res = res ^ ar[i]; 
  
    return res; 
} 