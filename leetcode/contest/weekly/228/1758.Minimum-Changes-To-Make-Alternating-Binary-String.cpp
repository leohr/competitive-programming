class Solution {
public:
    int minOperations(string s) {
        string s1 = "", s2 = ""; 
        for (int i = 0; i < s.size(); ++i) {
            if (i % 2 == 0) {
                s1 += "1"; 
            } else {
                s1 += "0";
            }
        }
        for (int i = 0; i < s.size(); ++i) {
            if (i % 2 == 0) {
                s2 += "0"; 
            } else {
                s2 += "1";
            }
        }
        int c1 = 0, c2 = 0; 
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != s1[i])
                ++c1;
        }
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != s2[i]) 
                ++c2; 
        }
        return min(c1, c2); 
    }
};