class Solution:
    def concatenatedBinary(self, n: int) -> int:
        bin = ""; 
        for i in range(n):
            bin +=  "{0:b}".format(i+1)
        num = int(bin, 2)
        return num % 1000000007; 