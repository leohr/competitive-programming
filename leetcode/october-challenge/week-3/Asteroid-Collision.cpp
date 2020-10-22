class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s; 
        vector<int> ans; 
        for (int i = 0; i < asteroids.size(); ++i) {
            int a = asteroids[i]; 
            if (a > 0) 
                s.push(a); 
            
            while (!s.empty() && -a > s.top())
                s.pop(); 
            
            if (a < 0 && s.empty()) 
                ans.push_back(a); 
            
            if (!s.empty() && -a == s.top())
                s.pop(); 
        }
                
        vector<int> rev; 
        int m = s.size(); 
        for (int i = 0; i < m; ++i) {
            rev.push_back(s.top()); 
            s.pop(); 
        }
        for (int i = m-1; i >= 0; --i) {
            ans.push_back(rev[i]); 
        }
        
        return ans; 
    }
};