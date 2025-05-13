
/*The node structure
struct Node {
int data;
Node * right, * left;
};*/

class Solution {
  public:
    /*The function should return the root of the modified tree*/
    Node* deleteNode(Node* root, int k) {
  if(root==NULL)
            return NULL;
            
        if(root->data >= k)
            return deleteNode(root->left, k);
        
        else
            root->right = deleteNode(root->right, k);
            
        return root;  
        
    }
};
/* In this approach we would just 
shift the nodes such that we will reach 
the nodes which wouldnt have to be deleted

Just like when we node>=k then we will 
know that the left subtree will have sl
smaller value and so we will choose that*/
