class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) 
            return 0; 
        
        int i = 1; 
        int k = 1; 
        while (i < nums.size()) {
            if (nums[i] == nums[i-1]) 
                nums.erase(nums.begin() + i); 
            else {
                ++i; 
                ++k;
            }
        }
        return k; 
    }
};