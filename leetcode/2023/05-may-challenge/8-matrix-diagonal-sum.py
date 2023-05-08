class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        ans, n = 0, len(mat)

        for i in range(n): 
            ans += mat[i][i] + mat[i][n-i-1]

        if n % 2 != 0: 
            i = int(n/2) 
            ans -= mat[i][i] 

        return(ans)
