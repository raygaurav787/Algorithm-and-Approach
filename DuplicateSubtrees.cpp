vector<Node*> ans;
    map<string,int> mp;
    
    string solve(Node* root){
    if(root==NULL) return "";
    string l=solve(root->left);
    string r=solve(root->right);
    string num=to_string(root->data)+'#'+l
    +'#'+r;
    if(mp[num]==1) ans.push_back(root);
    mp[num]++;
    return num;
    }
    
    
    vector<Node*> printAllDups(Node* root) {
    solve(root);
    return ans;
        
    }
};
/*We will serialize each and every string
and then we will use it by storing it in 
the map and so we will need and push the 
root when condition are followed */
