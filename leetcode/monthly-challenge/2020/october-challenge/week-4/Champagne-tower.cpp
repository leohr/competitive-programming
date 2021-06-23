class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> ans(102, vector<double> (102)); 
        ans[0][0] = poured; 
        for (int i = 0; i < 101; ++i) {
            for (int j = 0; j <= i; ++j) {
                ans[i+1][j] += max((ans[i][j]-1)/2.0, 0.0); 
                ans[i+1][j+1] += max((ans[i][j]-1)/2.0, 0.0);    
            }
        }
        
        return min(1.0, ans[query_row][query_glass]); 
    }
};