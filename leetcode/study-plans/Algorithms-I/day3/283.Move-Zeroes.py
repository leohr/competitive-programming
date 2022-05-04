class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        def shift(nums, i, j): 
            if i == j-1: 
                return nums
            if nums[i] == 0: 
                nums[i:j-1], nums[j-1] = nums[i+1:j], 0
                return shift(nums, i, j-1)
            else: 
                return shift(nums, i+1, j)
                
        nums = shift(nums, 0, len(nums))
        