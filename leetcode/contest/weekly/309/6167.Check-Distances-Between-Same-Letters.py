class Solution:
    def checkDistances(self, s: str, distance: List[int]) -> bool:
        d = {}
        abc = 'abcdefghijklmnopqrstuvwxyz'
        
        for i in range(len(s)): 
            c = s[i] 
            if c in d.keys():
                d[c] = i - d[c] - 1
            else: 
                d[c] = i 
                
        for i in range(26):
            if abc[i] in d.keys():  
                if distance[i] != d[abc[i]]: 
                    return False 
                
        return True 
