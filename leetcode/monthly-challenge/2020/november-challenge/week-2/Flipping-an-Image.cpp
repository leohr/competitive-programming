class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> B; 
        for (int i = 0; i < A.size(); ++i) {
            vector<int> v = A[i]; 
            vector<int> u; 
            for (int j = 0; j < v.size(); ++j) {
                u.push_back(1-v[v.size()-1-j]); 
            }
            B.push_back(u); 
        }
        return B; 
    }
};