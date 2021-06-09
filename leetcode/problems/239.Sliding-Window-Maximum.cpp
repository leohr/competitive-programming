class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> q; 
        vector<int> ans; 
        for (int i = 0; i < nums.size(); ++i) {
            if (i < k-1) {
                q.push({nums[i], i}); 
            } else {
                q.push({nums[i], i}); 
                auto top = q.top(); {
                    while (i - top.second >= k) {
                        q.pop(); 
                        top = q.top(); 
                    }
                }
                ans.push_back(top.first); 
            }
        }
        return ans; 
    }
};