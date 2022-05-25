class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        ones, zeros = set(), [] 
        for i in range(len(mat)): 
            for j in range(len(mat[0])): 
                if mat[i][j] == 0: 
                    zeros.append((i, j)) 
                else: 
                    ones.add((i, j)) 
        cnt = 0 
        while zeros:
            cnt += 1 
            newZeros = [] 
            for (i, j) in zeros: 
                for x in [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]: 
                    if x in ones: 
                        mat[x[0]][x[1]] = cnt
                        ones.discard(x)
                        newZeros.append(x)
            zeros = newZeros 

        return(mat) 
