class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums; 
        int n1 = nums1.size(), n2 = nums2.size(); 
        if (n1 == 0 || n2 == 0) 
            return nums; 
        sort(nums1.begin(), nums1.end()); 
        sort(nums2.begin(), nums2.end()); 
        int j = 0; 
        for (int i = 0; i < n1; ++i) {
            while (j < n2-1 && nums2[j] < nums1[i]) {
                ++j; 
            }
            if (nums2[j] == nums1[i] && (nums.empty() || nums[nums.size()-1] != nums1[i])) 
                nums.push_back(nums1[i]); 
        }
        return nums; 
    }
};