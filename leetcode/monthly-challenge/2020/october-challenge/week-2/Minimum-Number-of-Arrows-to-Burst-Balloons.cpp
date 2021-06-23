class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty())
            return 0;
        
        sort(points.begin(), points.end()); 
        
        int ans = 1, current = 0, maxPos = points[0][1]; 
        for (int i = 0; i < points.size(); ++i) {
            if (maxPos < points[i][0]){ 
                ++ans; 
                current = i; 
                maxPos = points[current][1]; 
            } else {
                maxPos = min(maxPos, points[i][1]); 
            }
        }
        
        return ans; 
    }
};
// Just shoot arrows as far as possible in order to burst every balloon.. 