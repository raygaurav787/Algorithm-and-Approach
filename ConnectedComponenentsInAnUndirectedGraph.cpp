void dfs(int node, vector<vector<int>>& adj, vector<int>& temp, vector<int>& visited) {
    visited[node] = 1;
    temp.push_back(node);
    
    for (int i = 0; i < adj[node].size(); i++) {  // Corrected the loop to iterate adj[node]
        if (!visited[adj[node][i]]) {
            dfs(adj[node][i], adj, temp, visited);
        }
    }
}

    vector<vector<int>> getComponents(int v, vector<vector<int>>& edges) {
        // code here
            vector<vector<int>> adj(v);  // Initialize adj to size v
    
    // Construct the adjacency list
    for (auto it : edges) {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }

    vector<int> visited(v, 0);  // Correct type and size
    vector<vector<int>> ans;

    // Find all connected components
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            vector<int> temp;
            dfs(i, adj, temp, visited);
            sort(temp.begin(),temp.end()) ;
            ans.push_back(temp);  // Add the connected component to the result
        }
    }
return ans;
}
