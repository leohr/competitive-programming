class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(); 
        int ans = 0; 
        int cur = 0; 
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) {
                int j; 
                for (j = i; j < n; ++j) {
                    if (nums[j] == 1) 
                        ++cur; 
                    else 
                        break; 
                }
                ans = max(ans, cur); 
                cur = 0; 
                i = j-1; 
            }
        }
        return ans; 
    }
};