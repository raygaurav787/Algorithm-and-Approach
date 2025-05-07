

class Solution {
  public:

void solve(Node* root, vector<vector<int>> &v, vector<int> &ans){
if(root==NULL) return;
ans.push_back(root->data);
solve(root->left,v,ans);
solve(root->right,v,ans);
if(!root->left && !root->right){
v.push_back(ans);
}
ans.pop_back();
}  
   
   
   
    vector<vector<int>> Paths(Node* root) {
    vector<int> ans;
    vector<vector<int>> v;
    solve(root,v,ans);
    return v;
    }
};
/* We will be step by step exploring all 
the paths using backtracking in here and
so we will now if the node is non leaf
then we will push it in the vector*/
