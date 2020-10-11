class Solution {
public:
    int maxDepth(string s) {
        int ans = 0; 
        stack<char> p; 
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                p.push('('); 
                int temp = p.size(); 
                ans = max(ans, temp); 
            }
            if (s[i] == ')') {
                p.pop(); 
            }
        }
        return ans; 
    }
};