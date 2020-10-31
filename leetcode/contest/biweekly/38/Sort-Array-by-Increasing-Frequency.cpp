class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> freq; 
        for (int i = 0; i < nums.size(); ++i) {
            ++freq[nums[i]]; 
        }
        vector<vector<int>> pairs; 
        for (auto e: freq) { 
            pairs.push_back({e.second, e.first}); 
        }
        sort(pairs.begin(), pairs.end()); 
        vector<int> ans; 
        for (int i = 0; i < pairs.size(); ++i) { 
            int k = i, km = i;  
            while (k < pairs.size()-1 && pairs[k][0] == pairs[k+1][0]){
                ++k; 
            }
            km = k; 
            while (k >= i) {
                for (int j = 0; j < pairs[k][0]; ++j) {
                    ans.push_back(pairs[k][1]); 
                }
                --k;
            }
            i += km-k-1; 
            
        }
        return ans; 
    }
};