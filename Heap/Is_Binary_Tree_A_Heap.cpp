//Q : Is Binary Tree a Heap
// link : https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1

class Solution {
    
    int countNodes(struct Node* tree){
        //base case
        if(tree == NULL)
            return 0;
            
        int ans = 1 + countNodes(tree -> left) + countNodes(tree -> right);
        return ans;
    }
    
    bool isCBT(struct Node* tree, int index, int cnt){
        if(tree == NULL)
            return true;
            
        if(index >= cnt){
            return false;
        }else{
            bool left = isCBT(tree -> left, 2*index+1, cnt);
            bool right = isCBT(tree -> right, 2*index+2, cnt);
            return (left && right);
        }
    }
    
    bool isMaxOrder(struct Node* root){
        //leaf node exists or not
        if(root -> left == NULL && root -> right == NULL)
            return true;
        
        //if there is only left node
        if(root -> right == NULL){
            return (root -> data > root -> left -> data);
        }
        else{
            bool left = isMaxOrder(root -> left);
            bool right = isMaxOrder(root -> right);
            
            return (left && right && 
            (root -> data > root -> left -> data) && (root -> data > root -> right -> data));
        }
    }
    
  public:
    bool isHeap(struct Node* tree) {
        
        int index = 0;
        int totalCount = countNodes(tree);
        
        if(isCBT(tree, index, totalCount) && isMaxOrder(tree)){
            return true;
        }else{
            return false;
        }
    }
};


//             countNodes + isCBT+ isMaxOrder
//Time complexity => O(N) + O(N) + O(N) = O(N)
//Space complexity => O(N);






