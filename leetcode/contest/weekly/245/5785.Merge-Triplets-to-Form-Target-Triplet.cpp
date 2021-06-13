class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int n = triplets.size();  
        int t0 = target[0], t1 = target[1], t2 = target[2]; 
        bool ok = false; 
        for (int i = 0; i < n; ++i) {
            if (triplets[i][0] == t0 && triplets[i][1] <= t1 && triplets[i][2] <= t2) 
                ok = true; 
        }
        if (!ok) 
            return false; 
        ok = false; 
        for (int i = 0; i < n; ++i) {
            if (triplets[i][0] <= t0 && triplets[i][1] == t1 && triplets[i][2] <= t2) 
                ok = true; 
        }
        if (!ok) 
            return false;
        ok = false; 
        for (int i = 0; i < n; ++i) {
            if (triplets[i][0] <= t0 && triplets[i][1] <= t1 && triplets[i][2] == t2) 
                ok = true; 
        }
        if (!ok) 
            return false;
        return true; 
    }
};