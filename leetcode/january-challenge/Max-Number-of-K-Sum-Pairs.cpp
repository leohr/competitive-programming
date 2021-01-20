class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size(); 
        map<int, int> reps; 
        int ans = 0; 
        for (int i = 0; i < n; ++i) {
            ++reps[nums[i]]; 
            if (reps[nums[i]] > 0 && reps[k - nums[i]] > 0 && nums[i] != k - nums[i]) {
                ++ans; 
                --reps[nums[i]]; 
                --reps[k - nums[i]]; 
            } 
            if (reps[nums[i]] > 1 && reps[k - nums[i]] > 1 && nums[i] == k - nums[i]) {
                ++ans; 
                reps[nums[i]] -= 2; 
            }
        }
        return ans; 
    }
};