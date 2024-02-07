// https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

Node* solve(int in[], int post[], int inorderStart, int inorderEnd, int postorderStart, int &index){
    //base case
    if(index < 0 || inorderStart > inorderEnd){
        return NULL;
    }
    
    // create a root node for element
    int element = post[index--];
    Node* root = new Node(element);
    
    // find element's index in inorder
    int position = inorderStart;
    for(; position < inorderEnd ; position++){
        if(in[position] == element) break;
    }
    
    // recursive calls [First right call then left call in postorder-inorder]
    root -> right = solve(in, post, position + 1, inorderEnd, postorderStart, index);
    root -> left  = solve(in, post, inorderStart, position -1, postorderStart, index);
    
    return root;
}

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    int index = n-1;
    Node* ans = solve(in, post, 0, n-1, 0, index);
    return ans;
}
