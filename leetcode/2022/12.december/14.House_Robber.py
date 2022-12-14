class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        ans = [0 for i in range(n)] 
        for i in range(n):
            if i == 0: 
                ans[i] = nums[0] 
            elif i == 1: 
                ans[i] = max(nums[0], nums[1])  
            else: 
                ans[i] = max(nums[i] + ans[i-2], ans[i-1]) 
        return ans[n-1]
