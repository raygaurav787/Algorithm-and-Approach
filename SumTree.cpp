bool final=false;
    
    int solve(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && 
    root->right==NULL) return root->data;
    int left=solve(root->left);
    int right=solve(root->right);
    if(root->data!=(left+right)) final=true;
    return root->data+left+right;
    }
    
    
    bool isSumTree(Node* root) {
    solve(root);
    return !final;
    }
/* Taking a global variable and return 
giving the values of sum for every 
subtree in each and every recursion call*/
