class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans = 0; 
        while ((a > 0 && b > 0) || (a > 0 && c > 0) || (b > 0 && c > 0)) {
            int v; 
            if (a == max(a, max(b, c))) {
                if (b == max(b, c)) {
                    v =  max(min(a - c, b), 1);  
                    a -= v; 
                    b -= v; 
                    ans += v; 
                } else {
                    v = max(min(a - b, c), 1); 
                    a -= v; 
                    c -= v; 
                    ans += v; 
                }
            } else if (b == max(a, max(b, c))) {
                if (a == max(a, c)) {
                    v = max(min(b - c, a), 1); 
                    b -= v; 
                    a -= v; 
                    ans += v; 
                } else {
                    v = max(min(b - a, c), 1); 
                    b -= v; 
                    c -= v; 
                    ans += v; 
                }
            } else {
                if (a == max(a, b)) {
                    v = max(min(c - b, a), 1); 
                    c -= v; 
                    a -= v; 
                    ans += v; 
                } else {
                    v = max(min(c - a, b), 1); 
                    c -= v; 
                    b -= v; 
                    ans += v; 
                }
            }
        }
        return ans; 
    }
};