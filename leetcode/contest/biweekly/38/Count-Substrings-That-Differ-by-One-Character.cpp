class Solution {
public:
    int countSubstrings(string s, string t) {
        int ans = 0; 
        int n = s.size(), m = t.size(); 
        for (int i = 0; i < n; ++i) {
            int mindif; 
            for (int l = 1; l+i-1 < n; ++l) {
                string s1 = s.substr(i, l); 
                mindif = 200; 
                for (int j = 0; j < m-l+1; ++j) {
                    string s2 = t.substr(j, l); 
                    int difs = 0;
                    for (int k = 0; k < l; ++k) {
                        if (s1[k] != s2[k])
                            ++difs; 
                        if (difs > 1)
                            break; 
                    }
                    if (difs == 1) {
                        ++ans; 
                    } 
                    mindif = min(mindif, difs); 
                }
                if (mindif > 1)
                    break; 
            }
        }
        return ans; 
    }
};