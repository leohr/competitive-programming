#include<bits/stdc++.h>
using namespace std; 

int main() {
    int q; cin >> q; 
    for (int tc = 0; tc < q; ++tc) {
        string h = "hackerrank"; 
        string s; cin >> s; 
        int current = 0; 
        bool ok = false; 
        for (int i = 0; i < s.size(); ++i) {
            if (h[current] == s[i]) 
                ++current; 
            if (current == h.size()) 
                ok = true; 
        }
        cout << (ok ? "YES" : "NO" ); 
    }
    return 0; 
}