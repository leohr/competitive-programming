class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if k == 0: 
            return 
        
        # Get ordered parts of new list 
        n = len(nums)
        k = k % n 
        first, second = [], [] 
        
        for i in range(n): 
            if (i < n - k): 
                second.append(nums[i]) 
            else: 
                first.append(nums[i])

        # Fill new list 
        i = 0 
        while first: 
            nums[i] = first[0] 
            first.pop(0)
            i += 1
        while second: 
            nums[i] = second[0] 
            second.pop(0)
            i += 1 
