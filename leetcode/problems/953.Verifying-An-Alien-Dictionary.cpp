class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        // Map characters into ints following the language order 
        map<char, int> mp; 
        int cnter = 0; 
        for (int i = 0; i < order.size(); ++i) {
            mp[order[i]] = cnter; 
            ++cnter; 
        }
        
        // Map the vector of strings into a vector of vectors 
        vector<vector<int>> words2; 
        for (int i = 0; i < words.size(); ++i) {
            vector<int> v; 
            for (int j = 0; j < words[i].size(); ++j) {
                v.push_back(mp[words[i][j]]); 
            }
            words2.push_back(v); 
        }
        
        // Make a copy and sort 
        vector<vector<int>> words3 = words2; 
        sort(words3.begin(), words3.end()); 
        
        // Check if first vector was allready sorted 
        for (int i = 0; i < words.size(); ++i) {
            if (words2 != words3) 
                return false; 
        }
        return true; 
    }
};