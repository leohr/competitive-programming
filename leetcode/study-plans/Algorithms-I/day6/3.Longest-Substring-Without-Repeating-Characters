class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        q = []
        reps = {}
        ans = 0
        for c in s: 
            q.append(c)
            if c in reps.keys(): 
                reps[c] += 1 
            else: 
                reps[c] = 1 
            
            while reps[c] > 1: 
                reps[q[0]] -= 1 
                q.pop(0)
                
            ans = max(ans, len(q)) 
            
        return ans 
        
