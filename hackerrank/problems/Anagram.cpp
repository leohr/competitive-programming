#include<bits/stdc++.h>
using namespace std; 

int solve(string s) {
    int count = 0; 
    int n = s.size();  
    if (n % 2 != 0) return -1; 
    string s1 = s.substr(0, n/2), s2 = s.substr(n/2, n/2); 
    map<char, int> m1, m2; 
    for (int i = 0; i < n/2; ++i) {
        ++m1[s1[i]]; 
        ++m2[s2[i]];
    }
    for (auto e: m1) {
        count += max(e.second - m2[e.first], 0); 
    }
    return count; 
}

int main() {
    int q; cin >> q; 
    for (int tc = 0; tc < q; ++tc) {
        string s; cin >> s; 
        int ans = solve(s); 
        cout << ans << endl; 
    }
    return 0; 
}