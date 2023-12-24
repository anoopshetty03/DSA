// Modified Ada lab program 
#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int first, int last){
    int i = first, j = last;
    int p = i;
    while ( i<j ){
        while (arr[i]<=arr[p]){
            ++i;
        }
        while (arr[j]>arr[p]){
            --j;
        }
        if ( i<j )
            swap(&arr[i], &arr[j]);
    }
    swap(&arr[p], &arr[j]);
    return j;
}

void quickSort(int arr[], int s, int e) {
    //base case
    if(s >= e) 
        return ;

    //partition
    int p = partition(arr, s, e);

    //left part sorting
    quickSort(arr, s, p-1);

    //right part sorting
    quickSort(arr, p+1, e);
}

int main() {

    int arr[10] = {2,4,1,6,9,19,5,6,9};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
    cout << arr[i] << " ";
    } cout << endl;
     return 0;
}