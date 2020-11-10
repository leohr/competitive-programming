class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n == 0) 
            return 0; 
        if (n == 1) 
            return 1; 
        int ans = 1;
        vector<int> nums(n+1); 
        for (int i = 0; i < (n+1)/2; ++i) {
            if (i == 0) {
                nums[0] = 0; 
                nums[1] = 1; 
            }
            if (i >= 1) {
                if (2*i <= n) {
                    nums[2*i] = nums[i]; 
                    ans = max(nums[2*i], ans);
                }
                if (2*i+1 <= n) {
                     nums[2*i+1] = nums[i] + nums[i+1]; 
                     ans = max(nums[2*i+1], ans);  
                }
            }            
        }

        return ans; 
    }
};