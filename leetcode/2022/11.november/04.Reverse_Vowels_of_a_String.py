class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        positions, stack = [], [] 
        for i in range(len(s)): 
            if s[i] in vowels: 
                positions.append(i)
                stack.append(s[i])  
        while len(stack) > 0: 
            s = s[:positions[0]] + stack.pop() + s[positions[0]+1:]
            positions.pop(0)   
        return s
        
