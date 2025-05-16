class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        queue<pair<Node*, int>>q;
        q.push({root, 0});
        map<int, vector<int>>mp;
        vector<int>res;
        while(!q.empty()){
            int sz = q.size();
            for(int i=0; i<sz; i++){
                auto p = q.front();
                q.pop();
                Node* curr = p.first;
                mp[p.second].push_back(curr -> data);
                if(curr -> left){
                    q.push({curr -> left, p.second - 1});
                }
                if(curr -> right){
                    q.push({curr -> right, p.second + 1});
                }
            }
        }
        for(auto i:mp){
            for(j:i.second)res.push_back(j);
        }
        return res;
    }
};
