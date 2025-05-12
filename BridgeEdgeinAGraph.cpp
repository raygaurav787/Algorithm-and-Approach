void dfs(int u, vector<vector<int>> &adj, vector<bool> &visited, int c, int d) {
    visited[u] = true;
    for (int v : adj[u]) {
        if ((u == c && v == d) || (u == d && v == c)) continue; // Skip the edge (c, d)
        if (!visited[v]) {
            dfs(v, adj, visited, c, d);
        }
    }
}

bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
    // Step 1: Build adjacency list
    vector<vector<int>> adj(V);
    for (auto &edge : edges) {
        int u = edge[0], v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Step 2: Run DFS from c, skipping the edge (c, d)
    vector<bool> visited(V, false);
    dfs(c, adj, visited, c, d);

    // Step 3: If d is not visited, (c, d) is a bridge
    return !visited[d];
}
/*Intuition
A bridge in a graph is an edge whose removal increases the number of connected components. To determine if an edge (c, d) is a bridge, we need to check if there exists any alternative path between c and d other than the direct edge (c, d).

If removing (c, d) disconnects c and d, then it is a bridge.

If c and d remain connected even after removing (c, d), then it is not a bridge.

Approach
Build the Adjacency List: Convert the given edge list into an adjacency list for efficient traversal.

DFS Traversal with Edge Exclusion: Perform a DFS from node c, but skip the edge (c, d) during traversal.

Check Connectivity: After DFS, if node d is still visited, it means there's an alternative path, and (c, d) is not a bridge. Otherwise, it is a bridge.

Key Insight
By excluding the edge (c, d) during DFS, we simulate its removal.

If d is still reachable from c, then (c, d) is redundant (not a bridge).
*/
