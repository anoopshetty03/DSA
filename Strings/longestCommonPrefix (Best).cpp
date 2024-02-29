//https://www.codingninjas.com/codestudio/problems/longest-common-prefix_2090383

#include<bits/stdc++.h>
using namespace std;

//Time Complexity = O(M*N) where 'N' is the no. of strings and 'M' is the length of the string
//Space Complexity = O(1) but when ans length included then it became O(M) where M is the length of the ans string

string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans = "";

    //for traversing all the char of the first string
    for(int i=0; i<arr[0].length(); i++) {
        char ch = arr[0][i];

        bool match = true;
        
        //for comparison of ch with the rest of the string
        for(int j=1; j<n; j++) {
            
            // not match
            if(ch != arr[j][i] || arr[j].size() < i) {
                match = false;
                break;
            }
        }

        if(match == false)
            break;
        else
            ans.push_back(ch);
    }
    return ans;
}
