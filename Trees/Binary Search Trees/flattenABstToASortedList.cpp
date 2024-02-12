// https://www.codingninjas.com/studio/problems/flatten-bst-to-a-sorted-list_1169459
#include <bits/stdc++.h>
using namespace std; 

void solve(TreeNode<int>* root, vector<int> &v){
    //base case
    if(root == NULL)
        return;

    solve(root-> left, v);
    v.push_back(root -> data);
    solve(root -> right, v);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> v;

    //store inorder => sorted values
    solve(root, v);
    int n = v.size();
    
    TreeNode<int>* newRoot = new TreeNode<int>(v[0]);

    //2nd step
    TreeNode<int>* curr = newRoot;

    for(int i=1; i<n; i++){

        TreeNode<int>* temp = new TreeNode<int>(v[i]);
        
        curr -> left = NULL;
        curr -> right = temp;
        curr = temp;
    }

    //final step
    curr -> left = NULL;
    curr -> right = NULL;

    //returning ans
    return newRoot;
}