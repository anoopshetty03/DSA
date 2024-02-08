// https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1

class Solution
{
    public:
    void flatten(Node *root)
    {
        Node* curr = root;
        
        while(curr != NULL){
            
            if(curr -> left)
            {
                //finding predecessor
                Node* pred = curr -> left;
                while(pred -> right)
                    pred = pred -> right;
                    
                pred -> right = curr -> right;
                curr -> right = curr -> left;
                curr -> left = NULL;
            }
            curr = curr -> right;
        }
    }
};