class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) 
            return 0; 
            
        queue<char> q; 
        unordered_map<char, int> mp; 
        int ans = 1; 
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i]; 
            while (mp[c] > 0) {
                --mp[q.front()];
                q.pop(); 
            }
            q.push(c); 
            ++mp[c]; 
            if (q.size() > ans)
                ans = q.size(); 
        }
        return ans; 
    }
};