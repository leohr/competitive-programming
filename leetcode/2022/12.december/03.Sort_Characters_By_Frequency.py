class Solution:
    def frequencySort(self, s: str) -> str:
        d = Counter(s) 
        l = [(c, f) for c, f in d.items()]
        s = sorted(l, key = lambda x: x[1], reverse = True)
        a = ''.join([c*f for c, f  in s])
        return a
