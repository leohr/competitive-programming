#include<bits/stdc++.h> 
using namespace std; 

int main() {
    string s; cin >> s; 
    int n = s.size()/3; 
    int ans = 0; 
    for (int i = 0; i < n; ++i) {
        if (s[3*i] != 'S')
            ++ans; 
        if (s[3*i+1] != 'O') 
            ++ans; 
        if (s[3*i+2] != 'S') 
            ++ans; 
    }
    cout << ans << endl; 
    return 0; 
}