class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        s = set() 
        for n in nums: 
            if n in s: 
                return True 
            else: 
                s.add(n)
        return False
