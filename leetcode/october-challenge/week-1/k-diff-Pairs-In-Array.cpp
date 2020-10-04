class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int, int> reps; 
        int n = nums.size(); 
        for (int i = 0; i < n; ++i) { 
            reps[nums[i]] += 1; 
        }
        int ans = 0; 
        for (auto n1: reps) {
            int n2 = n1.first - k; 
            int f1 = n1.second, f2 = reps[n2]; 
            if (f1*f2 > 0) {
                if (n1.first == n2) {
                    if (f1 > 1) 
                        ans += 1; 
                } else {
                    ans += 1;    
                }
            }
        }
        return ans; 
    }
};
// The idea is to map every number to a dictionary in order 
// to check in O(1) if the number may form a k-diff pair. 
// The frequency is only used for the case when nums[i] = nums[j]