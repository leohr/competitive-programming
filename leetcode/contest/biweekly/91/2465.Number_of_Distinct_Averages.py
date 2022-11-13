class Solution:
    def distinctAverages(self, nums: List[int]) -> int:
        avgs = set() 
        nums.sort() 
        while (len(nums) > 0): 
            avgs.add((nums[0] + nums[len(nums)-1])/2)
            nums.pop(0)
            nums.pop(len(nums)-1)
        return len(avgs)
        
