#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        int first = n, last = -1;
        vector<int> a(n);  
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
            if (a[i] == 1) {
                first = min(first, i); 
                last = max(last, i); 
            } 
        }
        int ans = 0; 
        for (int i = first; i <= last; ++i) {
            if (a[i] == 0) ++ans;     
        }
        cout << ans << endl; 
    }
    return 0; 
}