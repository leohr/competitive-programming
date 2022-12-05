class Solution:
    def minimumAverageDifference(self, nums: List[int]) -> int:
        ans, val, l, r, n  = 1e6, 0, 0, 0, len(nums)
        for i in range(n): 
            r += nums[i]
        for i in range(n):
            l += nums[i] 
            r -= nums[i] 
            if i < n-1: 
                avg = abs(int(l/(i+1)) - int(r/(n-i-1)))
            else: 
                avg = abs(int(l/n))
            if i == 0: 
                val = avg
                ans = 0 
            else: 
                if avg < val: 
                    val = avg
                    ans = i
        return ans 
