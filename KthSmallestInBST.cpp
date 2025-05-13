class Solution {
  public:
  int ans=INT_MIN;
  int count=0;
    // Return the Kth smallest element in the given BST

void inorder(Node *root,int k){
if(root==NULL) return;
inorder(root->left,k);
count++;
if(count==k) ans=root->data;
inorder(root->right,k);
}


int kthSmallest(Node *root, int k) {
inorder(root,k);
if(ans==INT_MIN) return -1;
return ans;
    }
};
