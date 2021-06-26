class Solution {
public:
    bool checkIfIncreasing(vector<int> v) {
        for (int i = 1; i < v.size(); ++i) {
            if (v[i] <= v[i-1]) 
                return false; 
        }
        return true; 
    }
    
    bool canBeIncreasing(vector<int>& nums) {
        bool ok = true; 
        int pos; 
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i-1]) {
                pos = i; 
                ok = false; 
                break; 
            }
        }
        
        if (ok) 
            return true; 
        
        
        vector<int> v = nums; 
        v.erase(v.begin() + pos-1); 
        if (checkIfIncreasing(v))
            return true; 
        
        v = nums; 
        v.erase(v.begin() + pos); 
        if (checkIfIncreasing(v)) 
            return true; 
        
        v = nums; 
        if (pos < v.size()-1){
            v.erase(v.begin() + pos+1); 
            if (checkIfIncreasing(v)) 
                return true; 
            
        }    
        return false; 
    }
};