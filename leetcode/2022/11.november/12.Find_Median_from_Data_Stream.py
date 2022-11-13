class MedianFinder:

    def __init__(self):
        self.arr = [] 
        self.n = len(self.arr)
        self.ok = False 

    def addNum(self, num: int) -> None:
        self.arr.append(num) 
        self.n = len(self.arr)
        self.ok = False 

    def findMedian(self) -> float:
        if (not self.ok): 
            self.arr.sort() 
            self.ok = True 

        m = int(self.n/2)
        if (self.n % 2 == 0): 
            return((self.arr[m-1] + self.arr[m])/2)
        else: 
            return(self.arr[m])


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()
