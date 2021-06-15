class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for (int i = left; i <= right; ++i) {
            bool ok = false; 
            for (int j = 0; j < ranges.size(); ++j) {
                if (ranges[j][0] <= i && ranges[j][1] >= i) {
                    ok = true;
                    break; 
                } 
            }
            if (!ok) 
                return false; 
        }
        return true; 
    }
};