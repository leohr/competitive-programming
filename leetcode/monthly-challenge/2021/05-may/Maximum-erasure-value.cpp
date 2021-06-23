class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0; 
        int val = 0; 
        queue<int> q; 
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            while (mp[x] == 1) {
                int y = q.front(); 
                val -= y; 
                mp[y] = 0; 
                q.pop(); 
            }
            if (mp[x] == 0) {
                val += x; 
                ans = max(ans, val); 
                q.push(x);
                mp[x] = 1; 
            }
        }
        return ans; 
    }
};