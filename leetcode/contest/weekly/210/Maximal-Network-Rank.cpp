class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        map<int, int> connections; 
        set<pair<int, int>> pairs; 
        for (int i = 0; i < roads.size(); ++i) {
            int ai = roads[i][0], bi = roads[i][1]; 
            connections[ai] += 1; 
            connections[bi] += 1; 
            pairs.insert({ai, bi}); 
            pairs.insert({bi, ai}); 
        }
        
        int ans = 0, value; 
        for (auto a: connections) {
            int ai = a.first; 
            for (auto b: connections) {
                int bi = b.first; 
                if (ai != bi) {
                    if (pairs.find(make_pair(ai, bi)) == pairs.end())
                        value = a.second + b.second;
                    else 
                        value = a.second + b.second - 1; 
                    ans = max(ans, value); 
                }
            }
        }
        
        return ans; 
    }
};