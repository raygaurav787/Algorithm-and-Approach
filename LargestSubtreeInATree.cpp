int mx=INT_MIN;
    
    int solve(Node* root){
    if(root==NULL) return 0;
    int l=solve(root->left);
    int r=solve(root->right);
    int ans=root->data+l+r;
    mx=max(ans,mx);
    return ans;
    
    }
    
    
    
    int findLargestSubtreeSum(Node* root) {
    solve(root);
    return mx;
    }
