class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [0]*n
        ans[0] = sum(abs(x - nums[0]) for x in nums)
        for i in range(1, n): 
            dif = nums[i] - nums[i-1] 
            ans[i] = ans[i-1] + i*dif - (n-i)*dif  
        return ans
    # Imagine a matrix where the element (i,j) contains the difference of nums[i]-nums[j]. The array we are looking for is the sum of the absolute values of each row in this matrix. 
    # Clearly, each element in the diagonal of the matrix is 0. Also, since the array nums is sorted in non-decreasing order, each element below the diagonal is negative while each element above it is positive. However, as we are interested in the sum of the absolute differences, each non-zero element adds to our answer. 
    # If we move from row i to row i+1, each element of the matrix decreases exactly in dif = nums[i+1]-nums[i]. Elements to the left of (i,i) increases our answer (as now they are more negative), while elements to the right of (i,i) decreases it (as now they are still positive but smaller). 
    # If we know the answer for i, we compute it for i+1 increasing it in dif*(number of negative values) and decreasing it in dif*(number of positive values). 
