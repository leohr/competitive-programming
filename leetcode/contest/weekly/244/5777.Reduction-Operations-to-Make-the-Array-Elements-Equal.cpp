class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ans = 0; 
        map<int, int> reps; 
        int minValue = 1e5; 
        for (int i = 0; i < nums.size(); ++i) {
            ++reps[nums[i]];
            minValue = min(minValue, nums[i]); 
        }
        int counter = 0; 
        for (auto e: reps) {
            ans += (counter)*e.second; 
            ++counter; 
        }
        return ans; 
    }
};