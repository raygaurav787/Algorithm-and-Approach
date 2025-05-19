bool iscyclic(int node,int parent,vector<int
    > graph[], vector<int> &visited){
    visited[node]=1;
    for(auto it : graph[node]){
    if(!visited[it]){
    if(iscyclic(it,node,graph,visited)) return 1;
    }
    else if(parent!=it) return 1;
    }
    return 0;
    }
    
    
    
    int isTree(int n, int m, vector<vector<int>> &adj) {
    vector<int>graph[n];
    vector<int> visited(n,0);
    for(auto &x : adj){
    graph[x[0]].push_back(x[1]);
    graph[x[1]].push_back(x[0]);
    }
    int comp=0;
    for(int i=0;i<n;i++){
    if(!visited[i]){
    comp++;
    if(iscyclic(i,-1,graph,visited)) return false;
    }
    }
    return (comp==1);
    }
    /* It should have 2 properties to tree
1) no cycles 
2) fully connected 

so we will take a dfs which will calculate 
number fo times components were formed 
their and so it should always be equal to 1.

If the node it has been already visited
but not from parent then it will be 
having a cycle for sure*/
