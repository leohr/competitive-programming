class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        lastSeen = {}
        for i in range(len(nums)):
            n = nums[i]
            if n not in lastSeen.keys(): 
                lastSeen[n] = i
            else: 
                if (i - lastSeen[n] <= k): 
                    return True
                lastSeen[n] = i 
        return False 
