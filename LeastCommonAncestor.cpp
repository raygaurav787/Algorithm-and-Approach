Node* LCA(Node* root, Node* n1, Node* n2) {
        if(!root) return NULL;
        if(root->data>n1->data && root->data>n2->data)
        return LCA(root->left, n1, n2);
        else if(root->data<n1->data && root->data<n2->data)
        return LCA(root->right, n1, n2);
        else return root;
        
}
/* Three cases are their 
1. both lie at left so in that case 
we will compare and send call to 
left function.

2.both lie at right so in that case 
we will compare and send call to 
right function.

3. one lie at right and the other lie 
at left in that case we will return root
as the current node which we are on will
be the lca in that case*/
