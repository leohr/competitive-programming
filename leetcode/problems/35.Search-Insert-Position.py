class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        i = 0 
        j = len(nums)-1
        while i < j - 1: 
            k = int((i + j)/2) 
            n = nums[k] 
            if n < target: 
                i = k 
            elif n > target: 
                j = k 
            else: 
                return k
        if nums[i] == target: 
            return i 
        if nums[j] == target: 
            return j 
        if nums[j] < target: 
            return j+1
        elif nums[i] > target: 
            return i
        else: 
            return i+1