class Solution:
    def isHappy(self, n: int) -> bool:
        checked = [] 
        while True: 
            squares = [int(x)**2 for x in str(n)] 
            n = sum(squares)
            if n == 1:
                return True
            if n in checked: 
                break 
            checked.append(n)
            
