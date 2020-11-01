class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>> sol(n); 
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                vector<int> v(5); 
                v[0] = 1; 
                v[1] = 1; 
                v[2] = 1; 
                v[3] = 1; 
                v[4] = 1; 
                sol[i] = v; 
            } else {
                vector<int> v(5); 
                v[0] = sol[i-1][0] + sol[i-1][1] + sol[i-1][2] + sol[i-1][3] + sol[i-1][4];
                v[1] = sol[i-1][1] + sol[i-1][2] + sol[i-1][3] + sol[i-1][4];
                v[2] = sol[i-1][2] + sol[i-1][3] + sol[i-1][4];
                v[3] = sol[i-1][3] + sol[i-1][4];
                v[4] = sol[i-1][4]; 
                sol[i] = v; 
            }
        }
        return sol[n-1][0] + sol[n-1][1] + sol[n-1][2] + sol[n-1][3] + sol[n-1][4]; 
    }
};