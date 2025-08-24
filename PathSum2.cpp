vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> ans;
    vector<int> path;
    solve(root,targetSum,path,ans);
    return ans;
    }

    void solve(TreeNode* node, int targetSum, vector<int> path,
    vector<vector<int>> &ans){
    if(!node) return;
    path.push_back(node->val);
    if(!(node->left) && !(node->right) && targetSum==node->val)
    ans.push_back(path);
    solve(node->left,targetSum-node->val,path,ans);
    solve(node->right,targetSum-node->val, path,ans);
    path.pop_back();
    }

// we will make a ans 2d vector &
a path 1d vector and then for 
each and every possibility we 
will push&pop backtrack & 
at if the node is leaf node 
than we will push path into 
the ans vector & do calls.
