void solve(Node* root, int k,
    int &ans,int sum, unordered_map<
    int,int> &mp){
    if(root==NULL) return;
    // always standard base case for tree
    
    sum+=root->data;
    // local sum for the given call
    ans+=mp[sum-k];
    // no of paths that dont start from 
    // root and have sum of k
    if(sum==k) ans++;
    // if after that the sum adds to k
    // then increment ans
    mp[sum]++;
    solve(root->left,k,ans,sum,mp);
    solve(root->right,k,ans,sum,mp);
    mp[sum]--;
    // standard backtracking opn
    }
    int sumK(Node *root, int k) {
    int ans=0;
    // variable will store total paths
    unordered_map<int,int> mp;
    // mapping of prefix sums
    solve(root,k,ans,0,mp);
    return ans;
    // returning given no of paths
    }
};
