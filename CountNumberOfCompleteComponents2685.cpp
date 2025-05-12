class Solution {
public:
    void dfs(int u, vector<vector<int>>& adj,vector<int>&vis,int& nodes,int& sum){
        vis[u]=1;
        nodes++;
        sum=sum+adj[u].size();
        for(auto v:adj[u]){
            if(vis[v]==0)dfs(v,adj,vis,nodes,sum);
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int>vis(n,0);
        vector<vector<int>>adj(n);
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int c=0;
        for(int i=0;i<n;i++){
            int nodes=0,sum=0;
            if(vis[i]==0){
                dfs(i,adj,vis,nodes,sum);
                if((nodes*(nodes-1)/2)==(sum/2))c++;
            }
        }
        return c;
    }
};
/* We will use this approach now use DFS
to traverse the edges and in every edge
we will count the total number of edges 
and nodes in it and as it is a completely 
connected component it will have edges equal
to twice the number of nodes*/
