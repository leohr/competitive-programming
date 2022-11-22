class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        // Get size of the grid  
        int m = maze.size(); 
        int n = maze[0].size();
        // Create queue for BFS loop 
        queue<tuple<int, int, int>> toVisit;  
        toVisit.push({entrance[0], entrance[1], 0}); 
        maze[entrance[0]][entrance[1]] = '+'; 
        // Loop while there are vertices to visit
        while (toVisit.size() > 0) {
            // Get first vertex, remove from queue and mark as visited
            auto [i, j, d] = toVisit.front();
            cout << i << "; " << j << ": " << toVisit.size() << endl;   
            toVisit.pop();
            // Check each valid direction 
            queue<tuple<int, int, int>> neighbors;
            neighbors.push({i-1, j, d+1}); neighbors.push({i, j-1, d+1});
            neighbors.push({i+1, j, d+1}); neighbors.push({i, j+1, d+1});
            for (int k = 0 ; k < 4; ++k) {
                tuple<int, int, int> ne = neighbors.front(); 
                neighbors.pop(); 
                // If the vertex is on the grid 
                if (get<0>(ne) >= 0 && get<0>(ne) < m && get<1>(ne) >= 0 && get<1>(ne) < n) {
                    // If the vertex is empty and not already visited 
                    if (maze[get<0>(ne)][get<1>(ne)] == '.') {
                        // Add to queue and mark as visited 
                        toVisit.push(ne); 
                        maze[get<0>(ne)][get<1>(ne)] = '+'; 
                        // If the vertex is not the entrance 
                        if (get<0>(ne) != entrance[0] || get<1>(ne) != entrance[1]) {
                            // And is on the edge
                            if (get<0>(ne) == 0 || get<0>(ne) == m-1 || get<1>(ne) == 0 || get<1>(ne) == n-1) {
                                return(d+1); 
                            }
                        }
                    }
                }              
            }
        } 
        return -1; 
    }
};
