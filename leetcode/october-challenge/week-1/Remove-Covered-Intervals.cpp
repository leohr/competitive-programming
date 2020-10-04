// As the constraints are small, simply check if the interval is covered by another 
// by comparing it limits with every other... bad solution... 

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int ans = 0, count = 0; // Count will store the number of covered intervals
        for (vector<int> x: intervals) {
            int a = x[0], b = x[1]; 
            for (vector<int> y: intervals) {
                int c = y[0], d = y[1]; 
                if (c <= a && b <= d && (a != c || b != d)) {
                    ++count; 
                    break; 
                }
            }
        }
        ans = intervals.size() - count; 
        return ans; 
    }
};