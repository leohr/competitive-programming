class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        cur = 0 
        D = dict() 
        nums.sort() 
        for i in range(len(nums)): 
            if i == 0: 
                D[cur] = [nums[i]]
                cur += 1 
            elif nums[i] != nums[i-1]:
                D[0].append(nums[i]) 
                cur = 1 
            else: 
                if cur in D.keys(): 
                    D[cur].append(nums[i]) 
                else: 
                    D[cur] = [nums[i]]
                cur += 1 
        ans = [] 
        for k in D: 
            ans.append(D[k]) 
        return ans
