    bool BFS(int node,bool visited[],vector<vector<int>>& adj)
    {
        queue<int> q;
        q.push(node);
        visited[node]=true;
        int nodes=0;
        int edges=adj[node].size();
        bool flag=true;
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            nodes++;
            
            if(adj[curr].size()!=edges) flag=false;
            
            for(auto it:adj[curr])
            {
                if(visited[it]) continue;
                visited[it]=true;
                q.push(it);
            }
        }
        return flag && edges+1==nodes;
    }
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        bool visited[V+1]={0};
        int count=0;
        for(int i=1;i<=V;i++)
        {
            if(!visited[i])
            {
                if(BFS(i,visited,adj)) count++;
            }
        }
        return count;
    }
/* In this question we have to count 
the total number of good components 
which are basically completely 
connected components and so to 
do that we will be using BFS 

so in bfs we will know that for a 
graph go be a completely joined component
it must be having all the nodes 
must be having equal number of edges 
connected to it and the number of 
edges should be equal to total number 
of vertices -1.

So in this way we will implement the 
BFS*/
