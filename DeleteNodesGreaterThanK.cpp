public:
    /*The function should return the root of the modified tree*/
    Node* deleteNode(Node* root, int k) {
  if(root==NULL)   return NULL;
  root->left=deleteNode(root->left,k);
  root->right=deleteNode(root->right,k);
  if(root->data>=k){
  Node* temp=root;
  root=root->left;
  delete(temp);
  return root;
  }
 return root;
    }
/* This is an approach where we will
delete the nodes at first we will do 
the postorder traversal and so using it 
we can get the children nodes first and
so their will be no hanging nodes/dangling
nodes in that case and so that the 

we will identify which of the nodes we 
have to delete and so then we will point 
the node to the left subtree as it will 
have smaller values and then we will 
return root to the tree*/
