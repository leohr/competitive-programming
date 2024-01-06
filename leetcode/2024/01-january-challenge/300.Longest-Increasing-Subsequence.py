class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        ans = [1]
        for i in range(1, len(nums)): 
            val = 1
            for j in range(i): 
                if nums[i] > nums[j]: 
                    val = max(ans[j] + 1, val)
            ans.append(val)
        return max(ans)
