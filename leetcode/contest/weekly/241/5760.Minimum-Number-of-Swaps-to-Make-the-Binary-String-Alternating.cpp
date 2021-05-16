class Solution {
public:
    int minSwaps(string s) {
        // Get s size: n 
        int n = s.size(); 
        // Store 2 possible alternating strings of length n 
        string s1, s2; 
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                s1 += '1'; 
                s2 += '0'; 
            } else {
                s1 += '0'; 
                s2 += '1'; 
            }
        }
        // For counting number of incorrect zeros/ones at each option 
        int z1 = 0, z2 = 0, o1 = 0, o2 = 0; 
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                if (s[i] != s1[i]) 
                    ++o1; 
                else 
                    ++o2; 
            } else {
                if (s[i] != s1[i]) 
                    ++z1; 
                else 
                    ++z2; 
            }
        }
        // For storing the answer 
        int ans = -1; 
        if (z1 == o1 & z2 == o2)
            ans = min(z1, z2); 
        else if (z1 == o1) 
            ans = z1; 
        else if (z2 == o2) 
            ans = z2; 
        
        return ans; 
    }
};