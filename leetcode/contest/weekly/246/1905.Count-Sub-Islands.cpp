class Solution {
public:
    void dfs(int i, int j, bool & ok, vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        if (grid2[i][j] == 0) 
            return; 
        
        if (grid1[i][j] == 0) 
            ok = false; 
        
        grid2[i][j] = 0; 
        
        int n = grid1.size(); 
        int m = grid1[0].size(); 
        
        if (i > 0) dfs(i-1, j, ok, grid1, grid2); 
        if (i < n-1) dfs(i+1, j, ok, grid1, grid2); 
        if (j > 0) dfs(i, j-1, ok, grid1, grid2); 
        if (j < m-1) dfs(i, j+1, ok, grid1, grid2); 
        
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int count = 0; 
        int n = grid1.size(); 
        int m = grid1[0].size(); 
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid2[i][j] == 1) {
                    bool ok = true; 
                    dfs(i, j, ok, grid1, grid2); 
                    if (ok) {
                        ++count;    
                    }
                }
            }
        }
        return count; 
    }
};