class Solution:
    def reverseWords(self, s: str) -> str:
        li = list(s.split(' '))
        ans = '' 
        for i in range(len(li)- 1, -1, -1): 
            if (li[i] != ''): 
                if (ans == ''): 
                    ans += li[i] 
                else: 
                    ans += ' ' + li[i]
        return ans
