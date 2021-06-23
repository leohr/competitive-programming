class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> t; 
        for (int i = 0; i < numRows; ++i) {
            if (i == 0) 
                t.push_back({1});
            else if (i == 1) 
                t.push_back({1, 1}); 
            else {
                int n = t[i-1].size() + 1; 
                vector<int> row(n); 
                for (int j = 0; j < n; ++j) {
                    if (j == 0) 
                        row[j] = 1; 
                    else if (j < n-1) 
                        row[j] = t[i-1][j-1] + t[i-1][j]; 
                    else 
                        row[j] = 1; 
                }
                t.push_back(row); 
            }
        }
        return t; 
    }
};