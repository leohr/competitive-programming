class Solution:
    def largestGoodInteger(self, num: str) -> str:
        ans = -1
        for i in range(len(num)-2): 
            if (num[i] == num[i+1] and num[i] == num[i+2]): 
                ans = max(ans, int(num[i]))
        ans = '' if ans == -1 else str(ans) + str(ans) + str(ans)
        return(ans) 
