class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int ans = 1, i = 0, j = 0; 
        map<int, int> mp; 
        ++mp[nums[i]];
        
        while (true) {
            if (j == nums.size() - 1) 
                break; 
            
            if (i == j) {
                ++j; 
                ++mp[nums[j]]; 
                continue; 
            } else {
                if (mp.rbegin()->first - mp.begin()->first <= limit) {
                    ans = max(ans, j - i + 1); 
                    ++j; 
                    ++mp[nums[j]]; 
                    continue; 
                } else {
                    --mp[nums[i]]; 
                    if (mp[nums[i]] == 0) {
                        mp.erase(nums[i]); 
                    }
                    ++i; 
                }
            }
        }
        
        if (mp.rbegin()->first - mp.begin()->first <= limit) 
                    ans = max(ans, j - i + 1); 
            
        return ans; 
    }
};

// The idea was to use 2 indexes in order to keep track of our "current array".
// The elements in this array are stored in a dictionary in order to have 
// fast access to the minimum and to the maximum (thus to the max difference).
// 
// If the condition of the problem is satisfied, then increase the right 
// index, add a new element to the dictionary and update the current answer. 
// Otherwise, increase the left index and delete the corresponding element of 
// the dictionary.
// Repeat until the original array is fully covered.  