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
        string s; cin >> s; 
        int ans = solve(s); 
        cout << "Case #" << tc+1 << ": " << ans << endl; 
    }
    return 0; 
}