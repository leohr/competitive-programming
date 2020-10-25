class Solution {
public:
    bool isArithmetic(vector<int> v){
        int n = v.size();  
        if (n == 1) 
            return false; 
        
        sort(v.begin(), v.end()); 
        for (int i = 1; i < n; ++i) { 
            if (v[i] - v[i-1] != v[1] - v[0])
                return false; 
        }
        
        return true; 
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = l.size(); 
        vector<bool> ans(m); 
        for (int q = 0; q < m; ++q) {
            vector<int> a; 
            for (int i = l[q]; i <= r[q]; ++i) {
                a.push_back(nums[i]); 
            }
            ans[q] = isArithmetic(a); 
        }
        return ans; 
    }
};