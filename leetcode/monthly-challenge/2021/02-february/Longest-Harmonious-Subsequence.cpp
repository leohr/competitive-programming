class Solution {
public:
    int findLHS(vector<int>& nums) {
        // Get frequency of each number 
        map<int, int> reps; 
        for (int i = 0; i < nums.size(); ++i) 
            ++reps[nums[i]]; 
        int ans = 0; 
        // For each unique number x in nums 
        for (auto x: reps) {
            // Check if x+1 is also in nums 
            if (reps.find(x.first+1) != reps.end()) {
                ans = max(ans, x.second + reps[x.first+1]); // Update longest harmonious subsequence 
            }
        }
        return ans; 
    }
};