class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        n, curr = len(arr), 1
        for i in range(1, n):
            if arr[i] == arr[i-1]: 
                curr += 1 
            else: 
                curr = 1
            if curr > n/4: 
                return arr[i] 
        return arr[0]
