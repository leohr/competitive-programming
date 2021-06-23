class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // Get number of soldiers in each row 
        vector<vector<int>> soldiers(mat.size()); 
        for (int i = 0; i < mat.size();  ++i) {
            vector<int> v(2); 
            soldiers[i] = v; 
            soldiers[i][0] = i; 
            for (int j = 0; j < mat[0].size(); ++j) {
                soldiers[i][1] += mat[i][j]; 
                if (mat[i][j] == 0)
                    break; 
            }
        }
        // Sort by second component and then by first
        sort(soldiers.begin(), soldiers.end(), 
             [] (vector<int> a, vector<int> b) { if (a[1] == b[1])
                                                     return a[0] < b[0]; 
                                                 else 
                                                     return a[1] < b[1];
                                                }); 
        // Fill answer vector 
        vector<int> ans; 
        for (int i = 0; i < k; ++i) {
            ans.push_back(soldiers[i][0]); 
        }
        return ans; 
    }
};