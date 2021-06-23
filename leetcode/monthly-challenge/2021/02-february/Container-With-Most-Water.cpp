class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int h1 = height[i], h2 = height[j]; 
        int ans = (j - i)*min(h1, h2); 
        while (i < j) {
            if (h1 <= h2) {
                ++i; 
                h1 = height[i]; 
                ans = max(ans, (j - i)*min(h1, h2)); 
            } else {
                --j; 
                h2 = height[j]; 
                ans = max(ans, (j - i)*min(h1, h2)); 
            }
        }
        return ans; 
    }
};