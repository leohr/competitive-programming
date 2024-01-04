class Solution:
    def minOperations(self, nums: List[int]) -> int:
        freqs = Counter(nums)
        ans = 0 
        for d in freqs: 
            cur = digitOperations(freqs[d]) 
            if cur == -1: 
                return -1
            else: 
                ans += cur 
        return int(ans)

def digitOperations(d): 
    if d == 1: 
        return -1 
    elif (d-2) % 3 == 0: 
        return 1 + (d-2)/3
    elif d % 3 == 0: 
        return d/3 
    elif (d-4) % 3 == 0: 
        return 2 + (d-4)/3
    else:
        return -1 
