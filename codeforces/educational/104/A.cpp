#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc ) {
        int n; cin >> n; 
        vector<int> a(n); 
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }
        // Get minimum value 
        int m = a[0]; 
        for (int i = 0; i < n; ++i) {
            if (a[i] < m)  
                m = a[i]; 
        }
        // Count the number of heroes with more strenght than the min
        int ans = 0; 
        for (int i = 0; i < n; ++i) {
            if (a[i] > m) 
                ++ans; 
        }
        // Output the answer
        cout << ans << endl; 
    }
    return 0; 
}