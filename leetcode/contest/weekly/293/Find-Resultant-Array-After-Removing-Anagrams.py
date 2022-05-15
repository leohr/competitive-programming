class Solution:
    def removeAnagrams(self, words: List[str]) -> List[str]:
        def areAnagrams(s1, s2): 
            d1 = {}
            for c in s1: 
                if c not in d1.keys(): 
                    d1[c] = 1 
                else: 
                    d1[c] += 1 
                    
            d2 = {}     
            for c in s2: 
                if c not in d2.keys(): 
                    d2[c] = 1 
                else: 
                    d2[c] += 1 
                    
            if d1 == d2: 
                return True 
            return False
        
        ans = words 
        i = 0 
        while i < len(ans)-1:
            if areAnagrams(ans[i], ans[i+1]): 
                del ans[i+1]
                continue
            i += 1 
        return ans 
        
