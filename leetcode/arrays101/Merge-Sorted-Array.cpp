class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0) {
            nums1 = nums2; 
            return; 
        }
        if (n == 0) {
            return; 
        }
        vector<int> nums; 
        int i = 0, j = 0; 
        while (i + j < n + m) {
            if (i == m) {
                nums.push_back(nums2[j]); 
                ++j; 
            } 
            else if (j == n) {
                nums.push_back(nums1[i]); 
                ++i; 
            }
            else if (nums1[i] < nums2[j]) {
                nums.push_back(nums1[i]); 
                ++i; 
            } else {
                nums.push_back(nums2[j]); 
                ++j; 
            }
        }
        for (int i = 0; i < n + m; ++i) {
            nums1[i] = nums[i]; 
        }
    }
};