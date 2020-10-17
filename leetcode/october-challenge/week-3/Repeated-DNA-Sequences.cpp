class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        unordered_map<string, int> reps; 
        for (int i = 9; i < s.size(); ++i) {
            string t = s.substr(i - 9, 10); 
            ++reps[t]; 
        }
        
        vector<string> ans; 
        for (auto r: reps) {
            if (r.second > 1) 
                ans.push_back(r.first); 
        }
        
        return ans; 
    }
};