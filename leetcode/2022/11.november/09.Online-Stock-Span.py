class StockSpanner:

    def __init__(self):
        self.flow = []
        self.i = 0

    def next(self, price: int) -> int:
        self.flow.append(price)
        
        if (len(self.flow) == 1): 
            return 1
            
        j = len(self.flow) - 1
        if (self.flow[ j ] < self.flow[ j - 1 ]):
            self.i = j - 1
            
        while (self.i >= 0): 
            if (self.flow[ self.i ] <= price): 
                self.i -= 1 
            else: 
                break 

        return j - self.i 
      
      
# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)
