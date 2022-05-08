class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        target = {}
        current = {}
        q = [] 
        
        for c in s1: 
            if c in target.keys(): 
                target[c] += 1 
            else: 
                target[c] = 1 
                
        for c in s2: 
            q.append(c)
            if c in current.keys(): 
                current[c] += 1 
            else: 
                current[c] = 1 
                
            if not c in target.keys(): 
                current = {}
                q = []
            else: 
                while current[c] > target[c]: 
                    current[q[0]] -= 1 
                    q.pop(0)
                    

            if current == target: 
                return True 
        
        return False 
