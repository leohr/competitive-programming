#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int n; cin >> n; 
    map<int, int> socks; 
    for (int i = 0; i < n; ++i) {
        int x; cin >> x; 
        ++socks[x]; 
    }
    int ans = 0; 
    for (auto e: socks) {
        ans += e.second/2; 
    }
    cout << ans << endl; 
    return 0; 
}