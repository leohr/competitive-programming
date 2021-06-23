class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size(); 
        priority_queue<pair<int, int>> q; 
        vector<int> ans(n, -1e9); 
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                ans[i] = nums[i]; 
                q.push({ans[i], i});
            } else if (i <= k) {
                auto top = q.top(); 
                ans[i] = top.first + nums[i]; 
                q.push({ans[i], i}); 
            } else {
                auto top = q.top(); 
                while (i - top.second > k) {
                    q.pop(); 
                    top = q.top(); 
                }
                ans[i] = top.first + nums[i]; 
                q.push({ans[i], i}); 
            }
        }
        return ans[n-1]; 
    }
};