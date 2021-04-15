class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int currentMin = 0; 
        for (int i = 0; i < nums.size(); ++i) {
            int current = nums[i];  
            if (current <= 0 || current == currentMin) 
                continue; 
            else if (current == currentMin+1) 
                currentMin += 1; 
            else 
                return currentMin+1;             
        }
        return currentMin+1; 
    }
};