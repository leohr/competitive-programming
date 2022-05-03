class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        i = 0 
        j = len(nums)-1
        nums2 = [None]*(j+1)
        for k in range(j, -1, -1):
            n1 = nums[i]**2
            n2 = nums[j]**2 
            if n1 > n2: 
                nums2[k] = n1 
                i += 1 
            else: 
                nums2[k] = n2
                j -= 1
        return nums2