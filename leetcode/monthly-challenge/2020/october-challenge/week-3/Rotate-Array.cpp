class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(); 
        k = k % n; 
        queue<int> first, second; 
        for (int i = 0; i < n; ++i) {
            if (i < n - k)
                second.push(nums[i]); 
            else 
                first.push(nums[i]); 
        }
        int i = 0; 
        while (!first.empty()) {
            nums[i] = first.front(); 
            first.pop(); 
            ++i; 
        }
        while (!second.empty()) {
            nums[i] = second.front(); 
            second.pop(); 
            ++i; 
        }   
    }
};