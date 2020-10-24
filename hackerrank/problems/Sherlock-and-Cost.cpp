#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        // Read input 
        int n; cin >> n; 
        vector<int> B(n); 
        for (int i = 0; i < n; ++i) cin >> B[i]; 
        // DP 
        vector<vector<int>> sol(n); 
        for (int i = 0; i < n; ++i) {
            vector<int> v(2); 
            if (i == 0) {
                v[0] = 0; 
                v[1] = 0; 
            } else {
                // Use 1 at position i of A[i] 
                v[0] = max(sol[i-1][0], 
                            sol[i-1][1] + abs(B[i-1] - 1)); 
                // Use B[i] at position i of A[i]
                v[1] = max(sol[i-1][1] + abs(B[i-1] - B[i]), 
                            sol[i-1][0] + abs(1 - B[i])); 
            }
            sol[i] = v; 
        }
        cout << max(sol[n-1][0], sol[n-1][1]) << endl; 
    }
    return 0; 
}

// The idea is to use dynamic programming. 
// For each i in {1, 2, ... , N} there are only two (optimal) choices: 
//  - Use 1 at last position. 
//  - Use B[i] at last position. 
// We store the solution in a Nx2 matrix and for each row we compute 
// the maximum value looking the above row. 
// The answer to the problem is simply the maximum value at last row. 