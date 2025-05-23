struct Node{
int val;
Node* left;
Node* right;
Node(int v): val(v),left(nullptr),right(
    nullptr){}
};
class Solution {
  public:
    
    Node* solve(Node* root, int key,int &succ){
    if(root==NULL) return new Node(key);
    if(key<root->val){
    succ=root->val;
    root->left=solve(root->left,key,succ);
    }
    else{
    root->right=solve(root->right,key,succ);
    }
    return root;
    }
    
    
    vector<int> findLeastGreater(vector<int>& arr, int n) {
    vector<int> result(n,-1);
    Node* root=NULL;
    for(int i=n-1;i>=0;--i){
    int succ=-1;
    root=solve(root,arr[i],succ);
    result[i]=succ;
    }
    return result;
    }
};
/* So in this question we would
generate a bst from right to left side
going in the vector and so as we see 
from L to R we can say that we wil have
all the arr[i+1] to arr[n-1] and so 
it will be used

now if the root->val>key and so we can 
say that it will be possible successor
in it and so we store it thier is an
alternate approach with set */
