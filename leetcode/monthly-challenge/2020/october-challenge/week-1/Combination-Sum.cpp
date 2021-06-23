class Solution {
public: 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans; 
        for (int i = 0; i < candidates.size(); ++i) {
            int c = candidates[i]; 
            if (candidates[i] == target) 
                ans.push_back({c}); 
            else {
                int new_target = target - c; 
                if (new_target > 0) {
                    vector<vector<int>> new_ans = combinationSum(candidates, new_target); 
                    for (auto a: new_ans) {
                        a.push_back(c); 
                        sort(a.begin(), a.end()); 
                        if (find(ans.begin(), ans.end(), a) == ans.end()){
                            ans.push_back(a);  
                        }
                    }   
                }
            }
        }
        return ans; 
    }
};