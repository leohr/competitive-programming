class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // Edge cases... 
        if (matrix.empty())
            return false; 
        if (matrix[0].empty())
            return false; 
        
        // Get row for searching the value 
        vector<int> v1; 
        for (int i = 0; i < matrix.size(); ++i) {
            v1.push_back(matrix[i][0]);
        }
        auto it = upper_bound(v1.begin(), v1.end(), target); 
        int rowIndex; 
        if (it == v1.end()) {
            rowIndex = matrix.size()-1; 
        } else if (it == v1.begin()) 
             return false; 
        else 
            rowIndex = distance(v1.begin(), it) - 1;

        // Search for the value at the corresponding row 
        vector<int> v2 = matrix[rowIndex]; 
        return (binary_search(v2.begin(), v2.end(), target)); 
    }
};