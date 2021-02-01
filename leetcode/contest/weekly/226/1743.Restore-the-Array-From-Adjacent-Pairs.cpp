class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n = adjacentPairs.size(); 
        // Store frequency and partner of each number 
        // (2 maps: first and second partner of each number)
        map<int, int> reps; 
        map<int, int> pairs1;
        map<int, int> pairs2; 
        for (int i = 0; i < n; ++i) {
            int v1 = adjacentPairs[i][0], v2 = adjacentPairs[i][1];
            ++reps[v1];
            ++reps[v2]; 
            // Partner of first value 
            if (pairs1.find(v1) == pairs1.end()) 
                pairs1[v1] = v2; 
            else 
                pairs2[v1] = v2; 
            // Partner of second value 
            if (pairs1.find(v2) == pairs1.end()) 
                pairs1[v2] = v1; 
            else 
                pairs2[v2] = v1; 
        }
        vector<int> ans(n+1);
        // Find first value 
        for (auto e: reps) {
            if (e.second == 1) {
                ans[0] = e.first; 
                break; 
            }
        }
        // Reconstruct full vector 
        for (int i = 0; i < n; ++i) {
            ans[i+1] = i>0 && pairs1[ans[i]] == ans[i-1] ? pairs2[ans[i]] : pairs1[ans[i]] ;   
        }
        return ans; 
    }
};