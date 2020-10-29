#include<bits/stdc++.h> 
using namespace std; 


int solve(string s) {
    if (s.size() <= 5) 
        return 0; 
    else {
        int ans = 0, kicks = 0; 
        for (int i = 0; i < s.size()-4; ++i) {
            if (s[i] == 'K' && s[i+1] == 'I' && s[i+2] == 'C' && s[i+3] == 'K')
                ++kicks; 
            if (s[i] == 'S' && s[i+1] == 'T' && s[i+2] == 'A' && s[i+3] == 'R' && s[i+4] == 'T')
                ans += kicks; 
        }
        return ans; 
    }
}

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc){
        int n; cin >> n; 
        vector<vector<int>> C(n); 
        for (int i = 0; i < n; ++i) {
            vector<int> v(n);
            for (int j = 0; j < n; ++j) {
                cin >> v[j]; 
            }
            C[i] = v; 
        }
        // Simply get the maximum diagonal sum
        long long ans = 0; 
        for (int d = 0; d < n; ++d) {
            long long i = 0, temp1 = 0, temp2 = 0; 
            while (i+d < n) {
                temp1 += C[i][i+d]; 
                ans = max(ans, temp1);

                temp2 += C[i+d][i]; 
                ans = max(ans, temp2); 
                ++i; 
            }
        }
        cout << "Case #" << tc+1 << ": " << ans << endl; 
    }
    return 0; 
}