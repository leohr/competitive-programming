class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> reps; 
        int ans = 0; 
        for (int i = 0; i < nums.size(); ++i) {
            int v = nums[i]; 
            ++reps[v]; 
            if (reps[k-v] > 0 & k-v != v) {
                ++ans; 
                --reps[k-v]; 
                --reps[v]; 
            }
            if (reps[k-v] > 1 & k-v == v) {
                ++ans; 
                --reps[k-v]; 
                --reps[v]; 
            }
        }
        return ans; 
    }
};