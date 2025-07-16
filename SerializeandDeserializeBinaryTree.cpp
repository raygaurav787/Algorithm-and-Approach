
class Solution {
  public:
void solve(Node *root, vector<int>&ans) {
       if(root == NULL) {
           ans.push_back(-1);
           return;
       }
       ans.push_back(root->data);
       solve(root->left, ans);
       solve(root->right, ans);
   }
   vector<int> serialize(Node *root) 
   {
       vector<int>ans;
       solve(root, ans);
       return ans;
   }
   
   //Function to deserialize a list and construct the tree.
   int index = 0;
   Node * deSerialize(vector<int> &a)
   {
       if(index == a.size()) {
           return NULL;
       }
       int value = a[index++];
       if(value == -1) {
           return NULL;
       }
       Node *root = new Node(value);
       root->left = deSerialize(a);
       root->right = deSerialize(a);
       return root;
   }


};
/* serialization means doing the 
preorder traversal of the tree 
and to deserialize we will and
recursively first call 
for root and then left and 
right child */