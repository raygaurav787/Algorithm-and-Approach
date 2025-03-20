
class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        vector<int> parent(n), min_path_cost(n, -1);
        iota(parent.begin(), parent.end(), 0);

        function<int(int)> find_root = [&](int node) {
            if (parent[node] != node) {
                parent[node] = find_root(parent[node]);
            }
            return parent[node];
        };

        for (auto& edge : edges) {
            int source = edge[0], target = edge[1], weight = edge[2];
            int source_root = find_root(source);
            int target_root = find_root(target);

            min_path_cost[target_root] &= weight;

            if (source_root != target_root) {
                min_path_cost[target_root] &= min_path_cost[source_root];
                parent[source_root] = target_root;
            }
        }

        vector<int> result;
        for (auto& q : query) {
            int start = q[0], end = q[1];
            if (start == end) {
                result.push_back(0);
            } else if (find_root(start) != find_root(end)) {
                result.push_back(-1);
            } else {
                result.push_back(min_path_cost[find_root(start)]);
            }
        }
        return result;
    }
};
/*
intuition
The problem asks us to find the minimum cost walk between nodes for multiple queries, where cost is defined as the bitwise AND of all edge weights in the walk. The key insight is that for any connected component, the minimum cost between any two nodes will be the bitwise AND of all edges that might be included in any possible walk.

Approach
We use a modified Union-Find data structure that not only tracks connectivity between nodes but also maintains the minimum possible bitwise AND value for each connected component.

Initialize each node as its own component with an AND value of -1 (all bits set to 1 in binary).
Process each edge by:
Finding the root nodes of the components containing the edge's endpoints
Updating the target component's AND value with the edge weight
If the endpoints are in different components, merge them and combine their AND values
For each query (s, t):
If s and t are the same node, return 0
If s and t are not in the same component, return -1
Otherwise, return the AND value of their component
The beauty of this approach is that as we build the graph, we simultaneously calculate the minimum possible AND value for any potential walk between nodes in the same component.

Complexity
Time complexity: O(N + E + Q), where E is the number of edges and Q is the number of queries

Union-Find operations with path compression have nearly constant amortized time
We process each edge once and each query once
Space complexity: O(N) for the parent array and the minimum path cost array


*/
