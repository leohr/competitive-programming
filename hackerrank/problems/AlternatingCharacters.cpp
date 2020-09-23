#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc=0; tc<t; ++tc) {
        string s; cin >> s; 
        int n = s.size(); 
        char lastchar = s[0];
        int ans = 0;  
        for (int i=1; i<n; ++i) {
            if (s[i] == lastchar)
                ++ans; 
            else 
                lastchar = s[i]; 
        }
        cout << ans << endl; 
    }
}