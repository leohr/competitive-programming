# include <bits/stdc++.h> 
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n, k; cin >> n >> k; 
        vector<int> a(n); 
        long long total = 0; 
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
            total += a[i]; 
        }
        if (n-1 <= k) {
            cout << total << endl; 
        } else {
            sort(a.begin(), a.end()); 
            long long ans = a[n-1]; 
            for (int i = 0; i < k; ++i) {
                ans += a[n-2-i]; 
            }
            cout << ans << endl; 
        }

    }

    return 0; 
}