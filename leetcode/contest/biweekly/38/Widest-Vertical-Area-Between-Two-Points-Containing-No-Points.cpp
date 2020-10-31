class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size(); 
        vector<int> x(n); 
        for (int i = 0; i < n; ++i) {
            x[i] = points[i][0]; 
        }
        sort(x.begin(), x.end());
        int ans = 0; 
        for (int i = 0; i < n-1; ++i) {
            ans = max(ans, x[i+1] - x[i]);
        }
        return ans; 
    }
};