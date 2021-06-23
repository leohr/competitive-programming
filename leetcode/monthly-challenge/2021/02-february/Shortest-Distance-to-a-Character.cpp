class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size(); 
        vector<int> ans(n);
        int last = n; 
        // Traverse from left to right 
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) 
                last = i; 
            ans[i] = abs(i - last); 
        }
        // Traverse from right to left 
        last = 0; 
        for (int i = n-1; i >= 0; --i) {
            if (s[i] == c)
                last = i; 
            ans[i] = min(ans[i], abs(i - last)); 
        }
        return ans; 
    }
};