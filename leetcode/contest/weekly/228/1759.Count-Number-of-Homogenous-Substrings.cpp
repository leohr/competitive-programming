class Solution:
    def countHomogenous(self, s: str) -> int:
        ans = 0
        last = 0
        for i in range(len(s)):
            if (i == 0):
                ans += 1 
                last = 1
            else: 
                if (s[i] == s[i-1]):
                    last += 1
                    ans += last
                else: 
                    last = 1
                    ans += 1
        ans = ans % 1000000007
        return ans