void inorder(vector<int> &v,Node* root)
    {
    if(root==NULL) return;
    inorder(v,root->left);
    v.push_back(root->data);
    inorder(v,root->right);
    }
    Node* solve(vector<int> &v,int start,
    int end){
    if(end<start) return NULL;
    int mid=start+(end-start)/2;
    Node* root=new Node(v[mid]);
    root->left=solve(v,start,mid-1);
    root->right=solve(v,mid+1,end);
    return root;
    
    }
    Node* balanceBST(Node* root) {
    vector<int> v;
    inorder(v,root);
    return solve(v,0,v.size()-1);
    }
};
/* To convert a normal BST to a balanced
BST we will have to firstly find the 
inorder of it the inorder of it will 
always be sorted and so then we will 
take it and than find its mid and then
pass the left link as well as a right 
link and then return the root*/
