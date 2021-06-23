class Solution {
public:       
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        // Edge cases
        if (n == 1) 
            return {0};
        if (n == 2) 
            return {0, 1}; 
        // Get the neighbors of each vertex 
        vector<set<int>> adj(n); 
        for (auto e: edges) {
            int v = e[0], u = e[1]; 
            adj[u].insert(v); 
            adj[v].insert(u); 
        }
        // Count neighbors of each vertex 
        vector<int> neighbors(n); 
        int max_degree = 0; 
        for (int v = 0; v < n; ++v) {
            neighbors[v] = adj[v].size(); 
            max_degree = max(neighbors[v], max_degree); 
        }
        // Cut leaves until there are only leaves remaining
        vector<int> removed(n); 
        while (max_degree > 1) { 
            max_degree = 0; 
            for (int v = 0; v < n; ++v) {
                if (neighbors[v] == 1) {
                    removed[v] = 1; 
                    int u = *adj[v].begin(); 
                    adj[u].erase(v); 
                    adj[v].clear();  
                }
            }
            for (int v = 0; v < n; ++v) {
                neighbors[v] = adj[v].size(); 
                max_degree = max(neighbors[v], max_degree); 
            }
        }
        // Return remaining leaves
        vector<int> ans; 
        for (int v = 0; v < n; ++v) {
            if (removed[v] != 1)
                ans.push_back(v); 
        }
        return ans; 
    }
};