
class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
   if(root1==NULL || root2==NULL)
   return root1==root2;
   if(root1->val!=root2->val)
   return false;
   return ((flipEquiv(root1->left,root2->left) && (flipEquiv(root1->right,root2->right))) || (flipEquiv(root1->left,root2->right) && flipEquiv(root1->right,root2->left)));
    }
};
/* based upon the inverting the tree
concept with extension on the basis of 
nodes */
