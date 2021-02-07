
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(); 
        for (int i = 0; i < n; ++i) {
            if (isSorted(nums))
                return true; 
            nums.push_back(nums[0]); 
            nums.erase(nums.begin());
        }
        return false; 
    }
    
    bool isSorted(vector<int> v) {
        for (int i = 0; i < v.size()-1; ++i) {
            if (v[i] > v[i+1]) 
                return false; 
        }
        return true; 
    }
};