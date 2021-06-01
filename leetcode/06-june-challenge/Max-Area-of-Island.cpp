class Solution {
public:
    void areaOfIsland(vector<vector<int>>& grid, int i, int j, int& area) {
        // DFS-like function to move around an island and get its area. 
        // Modifies 'area' in order to store the area of the island at position
        // (i,j). Also changes 'grid' in order to compute only once for each island. 
        if (grid[i][j] == 1) {
            ++area; 
            grid[i][j] = 2;             
        } else
            return;    
        if (i > 0) areaOfIsland(grid, i-1, j, area); 
        if (j > 0) areaOfIsland(grid, i, j-1, area); 
        if (i < grid.size()-1) areaOfIsland(grid, i+1, j, area); 
        if (j < grid[i].size()-1) areaOfIsland(grid, i, j+1, area); 
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0; 
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                int area = 0; 
                areaOfIsland(grid, i, j, area); 
                ans = max(ans, area); 
            }
        }
        return ans; 
    }
};