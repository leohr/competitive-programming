class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:     
        
        ### Get original sets of rotten and fresh oranges 
        fresh = set()
        rotten = [] 
        for i in range(len(grid)): 
            for j in range(len(grid[0])): 
                if grid[i][j] == 1: 
                    fresh.add((i, j)) 
                if grid[i][j] == 2: 
                    rotten.append((i, j)) 
        
        #### Simulate process 
        time = 0 
        while len(fresh) > 0: 
            time += 1 
            # Stop if there are no just rotten oranges 
            if len(rotten) == 0: 
                return(-1) 
            
            # Otherwise, get just rotten oranges 
            justRotten = [] 
            for orange in rotten: 
                i, j = orange[0], orange[1]
                for x in [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]: 
                    if x in fresh: 
                        justRotten.append(x)
                        fresh.discard(x) 
            rotten = justRotten 

        return(time) 
        
