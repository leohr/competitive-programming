class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int ans = 1e5; 
        for (int x = 1; x <= 6; ++x) {
            int Amin = 0, Bmin = 0; 
            bool bad = false; 
            for (int i = 0; i < A.size(); ++i) {
                if (A[i] != x && B[i] != x) {
                    bad = true; 
                    break; 
                }
                else if (A[i] == x && B[i] != x) ++Bmin; 
                else if (A[i] != x && B[i] == x) ++Amin; 
            }
            if (!bad)
                ans = min(ans, min(Amin, Bmin)); 
        }        
        if (ans < 1e5)
            return ans; 
        else 
            return -1; 
    }
};