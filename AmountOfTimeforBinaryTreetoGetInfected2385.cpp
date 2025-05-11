/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        
    TreeNode* createmapping(TreeNode* root,int target,map<TreeNode*,TreeNode*>& 
    nodetoparent){
        TreeNode* res=NULL;
        //level order traversal and mapping nodes to their parent
        queue<TreeNode*> q;
        q.push(root);
        nodetoparent[root]=NULL;
        while(!q.empty()){
            TreeNode* frontnode=q.front();
            q.pop();
            if(target==frontnode->val) res=frontnode;
            if(frontnode->left){
                nodetoparent[frontnode->left]=frontnode;
                q.push(frontnode->left);
            }
            if(frontnode->right){
                nodetoparent[frontnode->right]=frontnode;
                q.push(frontnode->right);
            }
        }
    // cout<<res->val;
          return res;
    }
    int infecttree(TreeNode* target,map<TreeNode*,TreeNode*>& nodetoparent){
        map<TreeNode*,bool> vis;// to check if a node is visited
        queue<TreeNode*> q;
        q.push(target);
        vis[target]=1;
        int time=0;
        while(!q.empty()){
            int n=q.size();
           // cout << n << ' ';
            bool flag=0;
            //processing neighbouring nodes
            for(int i=0;i<n;i++){
                TreeNode* front=q.front(); //cout<<front->val << ' ';
                q.pop();
                if(front->left && !vis[front->left] ){
                    flag=1;
                    q.push(front->left);
                   vis[front->left]=1;
                }
                if(front->right && !vis[front->right] ){
                    flag=1;
                    q.push(front->right);
                   vis[front->right]=1;
                }
               
               
                if(nodetoparent[front] && !vis[nodetoparent[front]]){
                    flag=1;
                    q.push(nodetoparent[front]);
                    vis[nodetoparent[front]]=1;
                }
               
        }
         if(flag==1) time++;
    }
      return time;
}
    int amountOfTime(TreeNode* root, int start) {
        //step1:create mapping of nodes to their parent
         map<TreeNode*,TreeNode*> nodetoparent;
        //step2: find the start node that is infected at first
        TreeNode* targetnode=createmapping(root,start,nodetoparent);
        //find the time using a map to check if a particular node is visted and a queue so that if a new addition is done to queue then that indicates that node is infected and time++
    
        int time=infecttree(targetnode,nodetoparent);
        return time;


        
    }
};

/* step1:create mapping of nodes 
with their parent.
step2: find the start node that
is infected at first.
step3:find the time: we use
a map to check if a particular node
is visted and a queue so that if 
a new addition is done to queue 
then that indicates that node 
is infected and time++*/
