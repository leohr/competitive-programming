#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int c0 = 0, c1 = 0, c2 = 0; 
        int n; cin >> n; 
        vector<int> a(n); 
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
            if (a[i] % 3 == 0) 
                ++c0; 
            if (a[i] % 3 == 1) 
                ++c1; 
            if (a[i] % 3 == 2)
                ++c2; 
        }
        int ans = 0; 
        while (c1 != n/3 || c2 != n/3 || c0 != n/3) {
            if (c0 < n/3) {
                if (c2 > n/3) { 
                    c0 += c2 - n/3;
                    ans += c2 - n/3;
                    c2 = n/3;   
                    continue; 
                } else { 
                    ans += 2*(n/3 - c0) + (n/3 - c2);
                    break; 
                }
            }
            if (c1 < n/3) {
                if (c0 > n/3) {
                    c1 += c0 - n/3;
                    ans += c0 - n/3;
                    c0 = n/3;   
                    continue; 
                } else { 
                    ans += 2*(n/3 - c1) + (n/3 - c0); 
                    break; 
                }
            }
            if (c2 < n/3) {
                if (c1 > n/3) {
                    c2 += c1 - n/3; 
                    ans += c1 - n/3;
                    c1 = n/3; 
                    continue;  
                } else { 
                    ans += 2*(n/3 - c2) + (n/3 - c1); 
                    break; 
                }
            }
        }
        cout << ans << endl; 
    }
    return 0; 
}