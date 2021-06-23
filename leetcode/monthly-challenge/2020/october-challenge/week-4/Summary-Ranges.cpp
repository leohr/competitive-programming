class Solution {
public:
    vector<string> rangesToString(vector<vector<int>> v) {
        vector<string> ans; 
        int n = v.size(); 
        for (int i = 0; i < n; ++i) {
            if (v[i][0] == v[i][1])
                ans.push_back(to_string(v[i][0])); 
            else 
                ans.push_back(to_string(v[i][0]) + "->" + to_string(v[i][1]));
        }
        return ans; 
    }
    
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans; 
        int n = nums.size(); 
        
        if (n == 0) 
            return ans; 
        
        if (n == 1) 
            return {to_string(nums[0])}; 
        
        vector<vector<int>> ranges; 
        int start = nums[0], end = nums[0]; 
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 2147483647) {
                if (end+1 < nums[i]) {
                    ranges.push_back({start, end}); 
                    ranges.push_back({nums[i], nums[i]}); 
                    continue; 
                }
                else {
                    ++end; 
                    ranges.push_back({start, end}); 
                    continue; 
                }
            }
            if (end+1 == nums[i])
                ++end; 
            if (end+1 < nums[i]) {
                ranges.push_back({start, end}); 
                start = nums[i]; 
                end = nums[i]; 
            }
            if (i == n-1) 
                ranges.push_back({start, end});        
        }
        for (int i = 0; i < ranges.size(); ++i) {
            cout << ranges[i][0] << " " << ranges[i][1] << endl; 
        }
        return rangesToString(ranges); 
    }
};