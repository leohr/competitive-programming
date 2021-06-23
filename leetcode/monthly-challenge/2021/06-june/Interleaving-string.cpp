class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.size(), m = s2.size(); 
        if (n + m != s3.size()) 
            return false; 
        
        // Create empty boolean matriz 
        vector<vector<int>> mat; 
        for (int i = 0; i < m+1; ++i) {
            vector<int> row(n+1); 
            mat.push_back(row); 
        }
        
        // Fill matrix 
        for (int i = 0; i < m+1; ++i) {
            for (int j = 0; j < n+1; ++j) {
                if (i == 0 && j == 0) 
                    mat[i][j] = true; 
                else if (i == 0) 
                    mat[i][j] = mat[i][j-1] && s1[j-1] == s3[j-1]; 
                else {
                    bool left = false; 
                    if (j > 0) 
                        left = (mat[i][j-1] && s1[j-1] == s3[i+j-1]); 
                    bool top = (mat[i-1][j] && s2[i-1] == s3[i+j-1]); 
                    mat[i][j] = left || top; 
                }
            }
        }
        
        return mat[m][n]; 
    }
};