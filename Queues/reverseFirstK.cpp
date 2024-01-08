#include <bits/stdc++.h>
using namespace std;

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    //algo:
    // step 1: pop first k from queue and put into stack
    stack<int> s;
    
    for(int i = 0; i<k; i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    // step 2: fetch from stack and push into queue
    while(!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    // step 3: fetch first (n-k) elements from queue and push back
    int t = q.size()-k;
    
    while(t--) {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
}