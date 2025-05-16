
/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

class Solution {
  public:
    // Function to connect nodes at same level.
    Node* connect(Node* root) {
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
    int n=q.size();
    Node* ans=NULL;
    for(int i=0;i<n;i++){
    Node* curr=q.front();
    q.pop();
    if(curr->left!=NULL){
    q.push(curr->left);
    }
    if(curr->right!=NULL){
    q.push(curr->right);
    }
    if(ans==NULL){
    ans=curr;
    }
    else{
    ans->nextRight=curr;
    ans=ans->nextRight;
    }
    }
    }
    return root;
    }
};
/* Bfs with some implementation of 
new pointer which will be added in 
case of 1st node*/
