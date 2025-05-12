    
    bool solve(set<int> &st,Node* root,int target
    ){
    if(root==NULL) return 0;
    if(st.find(target-root->data)!=st.end()) return true;
    st.insert(root->data);
    return solve(st,root->left,target) || 
    solve(st,root->right,target);
    }
    
    bool findTarget(Node *root, int target) {
        set<int> st;
        return solve(st,root,target);
    }
