void inorder(Node* root,vector<int>&v){
    if(root==NULL) return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
    }
    
    int solve(Node* root){
    if(root==NULL) return 0;
    vector<int> v;
    inorder(root,v);
    for(int i=1;i<v.size();i++){
    if(v[i-1]>=v[i]) return -1;
    }
    return v.size();
    }
    int largestBst(Node *root) {
    if(root==NULL) return -1;
    int ans=solve(root);
    if(ans!=-1) return ans;
    int l=largestBst(root->left);
    int r=largestBst(root->right);
    return max(l,r);
    }
};
/* We will first check that if the 
whole of the tree is a bst or not and
after that we will do one by one 
layer of the bsts and using it we will
be pass smaller bsts

For each and every bst we will do the 
inorder traversal of it and see if it
is sorted or not if sorted then we will
take it and send the size() otherwise 
send -1*/
