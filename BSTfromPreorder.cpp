    
    Node* solve(int pre[],int size,int l,int h){
    if(l>h) return NULL;
    int i=l+1;
    while(pre[i]<pre[l] && i<=h){
    i++;
    }
    Node* root=newNode(pre[l]);
    root->left=solve(pre,size,l+1,i-1);
    root->right=solve(pre,size,i,h);
    return root;
    }
    
    
    Node* Bst(int pre[], int size) {
    if(size==0) return NULL;
    return solve(pre,size,0,size-1);
    }
/* So in it we know that the first 
element of preorder element will be the 
root and the next section will be of 
larger(left subtree) and right portion 
will be smaller(right subtree) 

as the right subtree will have all the 
values smaller than the root and so
we will use this property to pivot it 
and get the answer*/
