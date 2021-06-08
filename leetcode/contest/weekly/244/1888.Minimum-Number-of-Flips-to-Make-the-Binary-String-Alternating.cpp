class Solution {
public: 
    string getAlternating(int n) {
        // Return the 0-starting alternating string of lenght n
        string s = ""; 
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) 
                s += "0"; 
            else 
                s += "1";
        }
        return s; 
    }
    
    int minFlips(string s) { 
        int n = s.size(); 
        string s0 = getAlternating(2*n); 
        
        // Get benchmark differences
        // d0: diff to the 0-starting alternating string 
        // d1: diff to the 1-starting alternating string 
        int d0 = 0, d1 = 0; 
        for (int i = 0; i < n; ++i) {
            if (s[i] != s0[i]) 
                ++d0; 
            else 
                ++d1; 
        }
        int ans = min(d0, d1); 
        
        // Shift to the left and recalculate differences 
        // (Note that d0 and d1 change in at most one!) 
        for (int i = n; i < 2*n; ++i) {
            if (s[i-n] != s0[i-n]) {
                if (s[i-n] == s0[i]) {
                    --d0; 
                    ++d1; 
                } 
            }  else {
                if (s[i-n] != s0[i]) {
                    ++d0; 
                    --d1; 
                } 
            }    
            ans = min(ans, min(d0, d1)); 
        }
        return ans;         
    }
};