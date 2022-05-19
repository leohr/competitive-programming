class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        dct = {}
        for i in range(len(s)):             
            if s[i] not in dct.keys(): 
                dct[s[i]] = t[i]
            else: 
                if dct[s[i]] != t[i]: 
                    return False
                
        vals = [x for x in dct.values()]
        if len(vals) > len(set(vals)): 
            return False 
        
        return True 
