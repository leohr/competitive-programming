class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        cf1 = self.getCharsAndFreqs(word1) 
        cf2 = self.getCharsAndFreqs(word2) 
        if cf1 == cf2: 
            return True
        else: 
            return False 


    def getCharsAndFreqs(self, word): 
        d = dict() 
        for c in word: 
            if c in d.keys(): 
                d[c] += 1
            else: 
                d[c] = 1
        chars, freqs = set(), []
        for c, f in d.items(): 
            chars.add(c) 
            freqs.append(f)
        freqs.sort()
        return([chars, freqs])
