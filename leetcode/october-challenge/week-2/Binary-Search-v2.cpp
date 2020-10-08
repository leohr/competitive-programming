class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1, k; 
        
        while (j - i > 1) {
            k = (i + j)/2; 
            
            if (nums[k] > target)
                j = k; 
            if (nums[k] < target)
                i = k; 
            if (nums[k] == target)
                return k; 
        }
        if (nums[i] == target)
            return i; 
        else if (nums[j] == target) 
            return j;
        else 
            return -1; 
    }
};
