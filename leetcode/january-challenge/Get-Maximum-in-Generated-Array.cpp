class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> nums(n+1); 
        int ans = 0; 
        for (int i = 0; i < n+1; ++i) {
            if (i == 0) 
                nums[i] = 0; 
            else if (i == 1)
                nums[i] = 1; 
            else {
                if (i % 2 == 0) 
                    nums[i] = nums[i/2]; 
                else 
                    nums[i] = nums[i/2] + nums[i/2+1];
            }
            ans = max(ans, nums[i]); 
        }
        return ans; 
    }
};