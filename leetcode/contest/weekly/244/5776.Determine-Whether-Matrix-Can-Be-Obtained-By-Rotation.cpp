class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>> mat) {
        int n = mat.size(); 
        vector<vector<int>> newMat(n); 
        for (int i = 0; i < n; ++i) {
            vector<int> row(n); 
            newMat[i] = row; 
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                newMat[j][n-1-i] = mat[i][j]; 
            }
        }
        return newMat; 
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if (mat == target) 
            return true; 
        vector<vector<int>> newMat = rotate(mat); 
        if (newMat == target) 
            return true; 
        newMat = rotate(newMat); 
        if (newMat == target) 
            return true; 
        newMat = rotate(newMat);
        if (newMat == target) 
            return true; 
        return false; 
    }
};