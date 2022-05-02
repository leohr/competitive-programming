class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        i = 0 
        j = len(nums)-1
        nums2 = [None]*(j+1) 
        for k in range(len(nums)): 
            n = nums[k]
            if n % 2 == 0: 
                nums2[i] = n 
                i += 1
            else: 
                nums2[j] = n 
                j -= 1
        return nums2
        