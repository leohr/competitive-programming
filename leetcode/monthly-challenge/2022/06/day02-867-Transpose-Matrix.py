class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        ans = [] 
        for j in range(len(matrix[0])):
            v = [] 
            for i in range(len(matrix)): 
                v.append(matrix[i][j]) 
            ans.append(v) 
        return ans 
