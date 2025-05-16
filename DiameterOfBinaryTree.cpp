int solve(Node* root,int &diameter){
        if(!root) return 0;
        
        int left=solve(root->left,diameter);
        int right=solve(root->right,diameter);
        
        diameter = max(diameter,left+right);
        
        return 1 + max(left,right);
    }
    int diameter(Node* root) {
        int ans=0;
        solve(root,ans);
        return ans;
    }
    
