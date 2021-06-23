class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size(); 
        vector<int> ld(n), rd(n); 
        
        int d = 3*1e4; 
        for (int i = 0; i < n; ++i) {
            if (seats[i] == 1)
                d = 0; 
            else 
                ++d; 
            ld[i] = d; 
        }
        
        d = 3*1e4; 
        for (int i = n-1; i >= 0; --i) {
            if (seats[i] == 1)
                d = 0; 
            else 
                ++d; 
            rd[i] = d; 
        }
        
        d = 0; 
        for (int i = 0; i < n; ++i) {
            d = max(d, min(ld[i], rd[i])); 
        }
        return d; 
    }
};

// For each seat, get left-distance and right-distances to the closest person.
// Then simply get the max min accross all seats. 
