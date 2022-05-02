class Solution:
    def search(self, nums: List[int], target: int) -> int:
        i = 0 
        j = len(nums)-1
        while i < j - 1: 
            k = int((i + j)/2)
            value = nums[k] 
            if target > value: 
                i = k 
            elif target < value: 
                j = k
            else: 
                return k
        if nums[i] == target: 
            return i
        if nums[j] == target: 
            return j
        return -1
        