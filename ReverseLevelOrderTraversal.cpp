vector<int> reverseLevelOrder(Node *root) {
    queue<Node*> q;
    q.push(root);
    vector<int> ans;
    while(!q.empty()){
    Node* nod=q.front();
    q.pop();
    ans.push_back(nod->data);
    if(nod->right) q.push(nod->right);
    if(nod->left) q.push(nod->left);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
/* So we will just use level order
traversal and in it we will go from
right child first and after that at 
end we will reverse the ans vector*/
