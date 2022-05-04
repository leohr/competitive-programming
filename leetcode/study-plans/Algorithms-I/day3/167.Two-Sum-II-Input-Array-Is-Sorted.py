class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        n = len(numbers)
        ok = False 
        for i in range(0, n):  
            
            if i > 0 and numbers[i-1] == numbers[i]: 
                i += 1 
                continue 
                
            for j in range(i+1, n): 
                if (numbers[i] + numbers[j] == target): 
                    ok = True
                    break
            if ok: 
                break
                    
        return([i+1, j+1])