class Solution {
  public:
    int getCount(Node *root, int l, int h) {
        int count=0;
      if(root ==NULL){
          return 0;
      }
      
      if(root->data >= l && root->data <= h){
          count=1;
      }
      count+=getCount(root->left,l,h);
      count+=getCount(root->right,l,h);
      return count;
      
        
    }
};
/* inorder with slight implement*/
