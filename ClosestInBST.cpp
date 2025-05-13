int minDiff(Node *root, int K) {
    Node* temp=root;
    int ans=INT_MAX;
    while(temp){
    ans=min(ans,abs((temp->data)-K));
    if(temp->data==K) break;
    else if(temp->data<K) temp=temp->right;
    else temp=temp->left;
    }
    return ans;
    }
