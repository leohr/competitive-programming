class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        def getLettersFromDigit(d): 
            if d == '2': 
                return ['a', 'b', 'c']
            elif d == '3': 
                return ['d', 'e', 'f'] 
            elif d == '4': 
                return ['g', 'h', 'i'] 
            elif d == '5': 
                return ['j', 'k', 'l'] 
            elif d == '6': 
                return ['m', 'n', 'o'] 
            elif d == '7': 
                return ['p', 'q', 'r', 's'] 
            elif d == '8': 
                return ['t', 'u', 'v'] 
            else: 
                return ['w', 'x', 'y', 'z'] 
        
        ans = []
        for d in digits: 
            newChars = getLettersFromDigit(d)
            if not ans: 
                ans = newChars
            else: 
                newAns = []
                for oldChars in ans: 
                    for c in newChars: 
                        newAns.append(oldChars + c) 
                ans = newAns 
        return ans 