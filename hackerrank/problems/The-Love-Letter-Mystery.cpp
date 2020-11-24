#include<bits/stdc++.h> 
using namespace std; 

int main() {
    // Build dictionary of values 
    string letters = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> mp; 
    int counter = 1; 
    for (auto c: letters) {
        mp[c] = counter++; 
    }
    // Solve 
    int q; cin >> q; 
    for (int tc = 0; tc < q; ++tc) {
        string s; cin >> s;
        int ans = 0, n = s.size(); 
        for (int i = 0; i < n/2; ++i) {
            ans += abs(mp[s[i]] - mp[s[n-1-i]]); 
        }
        cout << ans << endl; 
    }
    return 0; 
}