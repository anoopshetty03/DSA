//Q. Kth smallest element (gfg)
//link: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

//1.Approach: 1. Sort the given array in increasing order
            //2. return the [k-1]th element

//2.Approach: 1. Create a max-heap from the first k-elements
            //2. for rest elements, if element < heap.top()
                //i. heap.pop() -> deletion algo for the root node
                //ii. heap.push(element)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////  NOTE : Use Max heap to find Kth smallest element (priority_queue<int>pq)                               ////    
///////  Use Min heap to find Kth largest element priority_queue<int, vector<int>, greater<int> > minheap     ////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int>pq;
        
        //step-1 : create a max heap for the first k-elements
        for(int i=0; i<k; i++){
            pq.push(arr[i]);
        }
        
        //step-2 : If element is less than array's top
        for(int i = k; i<=r; i++){
            if(arr[i] < pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        //ans = pq.top()
        int ans = pq. top();
        return ans;
    }
};
//Time Complexity will be -> O(nlogk)
//Space Complexity will be => O(k)
