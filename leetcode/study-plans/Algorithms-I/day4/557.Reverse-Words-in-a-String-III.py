class Solution:
    def reverseWords(self, s: str) -> str:
        n = len(s)
        stack = []
        ans = ''
        
        for char in s: 
            if char == ' ': 
                while stack: 
                    ans += stack[-1] 
                    stack.pop() 
                ans += ' '
            else: 
                stack.append(char)
                
        while stack: 
            ans += stack[-1] 
            stack.pop() 
        
        return ans