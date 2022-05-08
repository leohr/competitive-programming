class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        m = len(image)
        n = len(image[0])
        visited = {}
        toVisit = [(sr, sc)]
        oldColor = image[sr][sc]
        while toVisit: 
            current = toVisit[0] 
            toVisit.pop(0) 
            visited[current] = 1
            i, j = current[0], current[1] 
            if (image[i][j] == oldColor): 
                image[i][j] = newColor
                neighbors = [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]
                for neigh in neighbors: 
                    i, j = neigh[0], neigh[1] 
                    if (i == -1) or (j == -1) or (i == m) or (j == n): 
                        continue 
                    elif (i, j) in visited.keys(): 
                        continue
                    toVisit.append(neigh)
        return image
        