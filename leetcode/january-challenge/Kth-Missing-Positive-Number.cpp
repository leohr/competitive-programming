class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int j = 1, missing = 0;
        for (int i = 0; i < arr.size(); ++i) {
            while (j < arr[i]) {
                ++missing; 
                if (missing == k) 
                    return j; 
                ++j;
            }
            if (j == arr[i]) 
                ++j; 
        }
        return j + (k - missing) - 1; 
    }
};