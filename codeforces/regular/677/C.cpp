#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        vector<int> a(n);  
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int p = *max_element(a.begin(), a.end());
        int i;  
        bool ok = false; 
        for (i = 0; i < n; ++i) {
            if (a[i] == p) {
                if (i == 0) {
                    if (a[i+1] < p) {
                        ok = true; 
                        break;
                    } 
                } 
                else if (i == n-1) {
                    if (a[i-1] < p) {
                        ok = true; 
                        break;
                    } 
                }
                else {
                    if (a[i-1] < p || a[i+1] < p) {
                        ok = true; 
                        break; 
                    }
                }
            }
        }
        if (ok) 
            cout << i+1 << endl;
        else 
            cout << -1 << endl;  
    }
    return 0; 
}