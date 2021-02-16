#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        int ans = 0; 
        vector<int> a(n); 
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }
        for (int i = 0; i < n-1; ++i) {
            int m = min(a[i], a[i+1]); 
            int M = max(a[i], a[i+1]); 
            while (2*m < M) {
                ++ans; 
                m *= 2; 
            }
        }
        cout << ans << endl; 
    }
    return 0; 
}