// https://practice.geeksforgeeks.org/problems/construct-tree-1/1

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/

class Solution{
    public:

    Node* solve(int in[], int pre[], int &preorderIndex, int n, int inorderStart, int inorderEnd){
        //base case
        if(preorderIndex >= n || inorderStart > inorderEnd){
            return NULL;
        }
        
		// create a root node for element
        int element = pre[preorderIndex++];
        Node* root = new Node(element);
        
		// find element's index in inorder
        int position = inorderStart;
        
        for(; position < inorderEnd; position++){
            if(in[position] == element) break;
        }
        
		// recursive calls 
        root -> left = solve(in, pre, preorderIndex, n, inorderStart, position - 1);
        root -> right= solve(in, pre, preorderIndex, n,  position + 1, inorderEnd);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderIndex = 0;
        Node* ans = solve(in, pre, preorderIndex, n, 0, n-1);
        return ans;
    }
};