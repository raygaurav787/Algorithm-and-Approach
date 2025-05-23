bool solve(Node* root,int mn, int mx){
    if(root==NULL) return 0;
    if(root->data==mn && root->data==mx){
    return 1;
    }
    return solve(root->left,mn,root->data-1)
    || solve(root->right,root->data+1,mx);
    }
    
    bool isDeadEnd(Node *root) {
    int mn=1;
    int mx=INT_MAX;
    return solve(root,mn,mx);
    }
/* So here we will know that deadend in 
a BST will be equal when we will have 
no place to insert so like the minimum
and maximum are close to each other 
consecutive 

So in that case we will be having a 
deadend and so for each and every root
we will see that which if their is atleast
1 node which will follow both properties
*/
