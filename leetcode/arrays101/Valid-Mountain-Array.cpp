class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() > 1 && arr[0] > arr[1]) 
            return false; 
        
        bool inc = true; 
        for (int i = 1; i < arr.size(); ++i) {
            if (inc && arr[i] <= arr[i-1]) 
                inc = false; 
            if (!inc && arr[i] >= arr[i-1]) 
                return false; 
        }
        
        if (inc) 
            return false; 
        
        return true; 
    }
};