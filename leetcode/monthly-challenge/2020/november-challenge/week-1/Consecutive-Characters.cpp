class Solution {
public:
    int maxPower(string s) {
        int ans = 1; 
        int pow = 1; 
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == s[i-1])
                ++pow; 
            else
                pow = 1; 
            ans = max(pow, ans); 
        }
        return ans; 
    }
};