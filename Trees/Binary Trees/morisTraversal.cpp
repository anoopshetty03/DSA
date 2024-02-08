// Morris Traversal whose sc = O(1) and tc = O(n)
// https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion-and-without-stack/

// Morris Traversal (Inorder)
void morisTraversal(Node* root){
    Node* curr, *pred;

    if(root == NULL) return ;

    curr = root;
    while (curr != NULL)
    {
        if(curr -> left == NULL)
        {
            cout << curr-> data << " ";
            curr = curr -> right;
        }
        else
        {
            //find predecessor(at first goto left then goto right untill u find null)
            pred = curr -> left;
            while(pred -> right != NULL && pred -> right != curr){
                pred = pred -> right;
            }

            if(pred -> right == NULL){
                pred -> right = curr;
                curr = curr -> left;
            }
            else
            {
                pred -> right = NULL;
                cout << curr -> data << " ";
                curr = curr -> right;
            }
        }
    }
    
}