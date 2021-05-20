class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j ){
                if (grid[i][j] == '1') {
                    ++islands;
                    markIslands(grid, i, j);
                }
            }
        }
        return islands; 
    }
    
    void markIslands(vector<vector<char>>& grid, int i, int j) {
        if (grid[i][j] == '1')
            grid[i][j] = 'x'; 
        else 
            return; 
        if (i > 0) markIslands(grid, i-1, j); 
        if (j > 0) markIslands(grid, i, j-1); 
        if (i < grid.size()-1) markIslands(grid, i+1, j); 
        if (j < grid[i].size()-1) markIslands(grid, i, j+1); 
    }
};