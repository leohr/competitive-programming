class Solution:
    def removeDuplicates(self, s: str) -> str:
        li = []
        li[:0] = s
        i = 0
        while (i < len(li)):
            if (i > 0 and li[i-1] == li[i]): 
                li.pop(i-1) 
                li.pop(i-1)
                i -= 2
            i += 1
        s = ''.join(li)
        return s
