/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    void solve(Node* root,int &l,int &r
    ,int &cnt){ 
    if(root==NULL) return;
    if(root->data>l){
    solve(root->left,l,r,cnt);
    }
    if(root->data<r){
    solve(root->right,l,r,cnt);
    }
    if(root->data>=l && root->data<=r) cnt++;
    }
    
    
    int getCount(Node *root, int l, int h) {
    int cnt=0;
    solve(root,l,h,cnt);
    return cnt;
    }
};
/* we will make the iteration of function 
call such that it will lie in the range l-r
if becomes greater than l than move left
and if still less than r than move right*/
