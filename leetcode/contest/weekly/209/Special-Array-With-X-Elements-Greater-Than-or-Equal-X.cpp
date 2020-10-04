class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size(); 
        for (int x = 1; x <= n; ++x) {
            int count = 0; 
            for (int i = 0; i < n; ++i) {
                if (nums[i] >= x) 
                    ++count; 
            }
            if (count == x)
                return x; 
        }
        return -1; 
    }
};