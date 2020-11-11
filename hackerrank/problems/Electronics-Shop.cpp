#include<bits/stdc++.h>
using namespace std; 

int main() {
    int b, n, m; cin >> b >> n >> m; 
    vector<int> key(n);
    for (int i = 0; i < n; ++i) 
        cin >> key[i]; 
    vector<int> usb(m); 
    for (int i = 0; i < m; ++i) 
        cin >> usb[i]; 

    int ans = -1; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int v = key[i] + usb[j]; 
            if (v <= b) {
                ans = max(ans, v); 
            }
        }
    }
    cout << ans << endl; 

    return 0; 
}