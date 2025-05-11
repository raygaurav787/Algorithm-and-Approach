vector<vector<int>> levelOrder(Node *root) {
    vector<vector<int>> ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
    int sz=q.size();
    vector<int> temp;
    while(sz--){
    Node* nod=q.front();
    q.pop();
    temp.push_back(nod->data);
    if(nod->left!=NULL) q.push(nod->left);
    if(nod->right!=NULL) q.push(nod->right);
    }
    ans.push_back(temp);
    }
    return ans;
        
    }
