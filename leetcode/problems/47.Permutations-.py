class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        def permute(lst) :
            n = len(lst) 
            if n == 1: 
                return [lst]
            
            ans = [] 
            for i in range(n): 
                tempLst = lst[:]
                num = tempLst[i] 
                tempLst.pop(i)
                current = permute(tempLst)
                for l1 in current: 
                    l1.append(num) 
                    if not l1 in ans: 
                        ans.append(l1)
            return ans
            
        return permute(nums) 