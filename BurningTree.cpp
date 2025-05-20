
class Solution {
  public:
    int minTime(Node* root, int target) {
    Node* targetnode=NULL;
    queue<Node*> q;
    q.push(root);
    unordered_map<Node*,Node*> mp;
    
    while(!q.empty()){
    Node* curr=q.front();
    q.pop();
    if(curr->data==target){
    targetnode=curr;
    }
    if(curr->left){
    mp[curr->left]=curr;
    q.push(curr->left);
    }
    if(curr->right){
    mp[curr->right]=curr;
    q.push(curr->right);
    }
    }
    //bool p=false;
    queue<Node*> q2;
    int ans=-1;
    q2.push(targetnode);
    map<Node*,bool> burned;
    burned[targetnode]=true;
    while(!q2.empty()){
    int s=q2.size();
    ans++;
    while(s--){
    Node* temp=q2.front();
    q2.pop();
    if(!burned[temp->left] && 
    temp->left){
    //p=true;
    burned[temp->left]=true;
    q2.push(temp->left);
    }
    if(!burned[temp->right] && 
    temp->right){
    //p=true;
    burned[temp->right]=true;
    q2.push(temp->right);
    }
if(!burned[mp[temp]] && 
    mp[temp]){
   // p=true;
    burned[mp[temp]]=true;
    q2.push(mp[temp]);
    }
    }
    }
    return ans;
    }
};
/* this question will require and have 
bfs which will be on parents as well as
right and left child and so 

one thing to notice would be that we
would take int ans=-1 initially 
this is done as at t=0 one node i.e
the target node has burned and so we 
have to count it such that it will
be accommodated*/
