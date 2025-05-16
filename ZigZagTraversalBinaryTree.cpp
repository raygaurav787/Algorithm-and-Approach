    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node* root) {
    int level=1;
    queue<Node*> q;
    q.push(root);
    vector<int> ans;
    while(!q.empty()){
    int n=q.size();
    vector<int> temp;
    while(n--){
    Node* curr=q.front();
    q.pop();
    temp.push_back(curr->data);
    if(curr->left!=NULL) q.push(curr->left);
    if(curr->right!=NULL) q.push(curr->right);
    }
    if(level%2==0) reverse(temp.begin(),temp.end());
    for(int i=0; i<temp.size(); i++)
	ans.push_back(temp[i]);
    level++;
    	}
    	return ans;
    }
/* normal vector reverse vector &soon*/
