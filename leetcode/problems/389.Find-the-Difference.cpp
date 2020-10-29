class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s.length() == 0) 
            return t[0]; 
            
        unordered_map<char, int> schars, tchars; 
        for (int i = 0; i < t.size(); ++i) {
            ++tchars[t[i]]; 
            if (i < t.size()-1) 
                ++schars[s[i]];
        }
        for (auto c: tchars) {
            if (c.second - schars[c.first] == 1) 
                return c.first; 
        }
        return 'x';
    }
};