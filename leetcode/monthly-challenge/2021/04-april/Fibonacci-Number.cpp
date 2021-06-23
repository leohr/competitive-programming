class Solution {
public:
    int fib(int n) {
        vector<int> f(n+1); 
        for (int i = 0; i <= n; ++i) {
            if (i == 0) 
                f[i] = 0; 
            else if (i == 1) 
                f[i] = 1; 
            else
                f[i] = f[i-1] + f[i-2]; 
        }
        return f[n]; 
    }
};