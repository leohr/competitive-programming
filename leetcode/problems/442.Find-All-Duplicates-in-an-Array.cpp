class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> rep; 
        vector<int> ans; 
        for (int i = 0; i < nums.size(); ++i) {
            if (rep[nums[i]] == 1) 
                ans.push_back(nums[i]);
            else 
                ++rep[nums[i]];
        }
        return ans; 
    }
};
