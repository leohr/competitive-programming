#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin >> n; 
    string s; cin >> s; 
    int ans = 0; 
    for (int i = 2; i < n; ++i) {
        if (s[i-2]=='0' && s[i-1]=='1' && s[i]=='0') {
            s[i] = '1'; 
            ++ans; 
        }
    }    
    cout << ans << endl; 
    return 0; 
}