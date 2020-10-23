class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size(); 
        
        // Edge cases? 
        if (n == 1) 
            return false; 
        
        if (n == 2)
            return false; 
        
        // Get minimum from left to right 
        vector<int> minLeft(n); 
        for (int i = 0; i < n; ++i) {
            if (i == 0) 
                minLeft[i] = nums[i]; 
            else 
                minLeft[i] = min(minLeft[i-1], nums[i]);
        }
        
        // Get minimum from right to left, conditional of being above minLeft[i-1]
        // Store the minimum (usefull) element at the top of the stack
        stack<int> minRight; 
        for (int i = n-1; i >= 1; --i) {
            if (nums[i] >= minLeft[i-1]) {
                while (!minRight.empty() && minRight.top() <= minLeft[i-1])
                    minRight.pop(); 
                if (!minRight.empty() && minRight.top() < nums[i])
                    return true; 
                else 
                    minRight.push(nums[i]); 
            }
        }
        
        return false; 
    }
};