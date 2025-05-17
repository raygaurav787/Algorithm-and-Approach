class Solution {
  public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* leastcommonancestor(Node* root,int a,
    int b){
    if(root==NULL) return NULL;
    if(root->data==a || root->data==b){
    return root;
    }
    Node* l=leastcommonancestor(root->left,a,b);
    Node* r=leastcommonancestor(root->right,a,b);
    if(l!=NULL & r!=NULL) return root;
    if(l) return l;
    return r;
    }
/* This function is responsible for 
finding the lca in tree so basically it
will work like this that if at any side 
their is a node than it will return 
that root

And after that it will propagate to left
and right subtree and so it will have 
to find the other node


and once this happens it will than propa
gate that found node upwards to the root
using the 3 comtrol statement given */
    
    int solve(Node* root,int target){
    if(root==NULL) return 0;
    if(root->data==target) return 1;
    int l=solve(root->left,target);
    int r=solve(root->right,target);
    if(!l & !r) return 0;
    if(!l) return r+1;
    if(!r) return l+1;
    int minval=min(l,r);
    return minval+1;
    }
/* This function will be used to find the 
distance between the target and node and 
so whenever it hits null than returns zero
as branch ends 

when it finds the required value it will 
return 1 and then propagate to left and 
right subtrees and so than will 
return according to control statement 

if one branch is null then return the other
branch +1 is the concept and if duplicate 
elements are their then we will use the 
minval concept their
*/
    
    int findDist(Node* root, int a, int b) {
    Node * lca=leastcommonancestor(root,a,b);
    int x=solve(lca,a);
    int y=solve(lca,b);
    return x+y-2;
        
    }
/* lca function will find the node and 
then we will find the distance between the 
lca and a & lca and b and sum them to give 
answer -2 beacause lca cisited twice */
