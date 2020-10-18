class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size(); 
        map<char, vector<int>> reps; 
        for (int i = 0; i < n; ++i) { 
            reps[s[i]].push_back(i); 
        }
        
        bool out = true; 
        for (auto r: reps) {
            if (r.second.size() >= 2)
                out = false;
            else 
                reps.erase(r.first); 
        }
        
        if (out)
            return -1; 
        
        int ans = 0; 
        for (auto r: reps) {
            int m = r.second.size(); 
            int dif = r.second[m-1] - r.second[0] - 1; 
            ans = max(ans, dif); 
        }
        
        return ans; 

    }
};