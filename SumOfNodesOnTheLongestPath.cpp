int ans=INT_MIN;
    int max_level=0;
    
    void solve(Node* root,int level,int sum){
    if(root==NULL) return;
    sum+=root->data;
    if(level>max_level){
    max_level=level;
    ans=sum;
    }
    else if(level==max_level){
    ans=max(ans,sum);
    }
    solve(root->left,level+1,sum);
    solve(root->right,level+1,sum);
        
    }
    int sumOfLongRootToLeafPath(Node *root) {
    solve(root,1,0);
    return ans;
    }
/* So basically in this approach we will
go preorder instead of postorder being 
the first thing

the second thing would be that we would
require 2 set of variables one will be 
local to the function scope (sum & lvl)
and other will be global (ans & max_lvl).

And so due to both of them use these
tweaks when we get a larger height than
we will automatically update both 

and at same height we will seek 
maximum amount of sum (ans as global)
*/
