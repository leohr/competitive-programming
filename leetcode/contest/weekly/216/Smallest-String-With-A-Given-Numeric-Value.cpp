class Solution {
public:
    string getSmallestString(int n, int k) {
        string letters = "abcdefghijklmnopqrstuvwxyz"; 
        map<int, char> values; 
        int current = 1; 
        for (int i = 0; i < letters.size(); ++i) {
            values[i] = letters[i]; 
            ++current; 
        }
        int z = (k-n) / 26; 
        int r = (k-n) % 26 + z; 
        while (r > 25) {
            ++z; 
            r -= 25; 
        }
        string ans = ""; 
        for (int i = 0; i < n-z-1; ++i) {
            ans += "a"; 
        }
        ans += values[r]; 
        for (int i = 0; i < z; ++i) {
            ans += "z"; 
        }
        return ans; 
    }
};