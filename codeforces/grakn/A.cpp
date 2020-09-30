#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        vector<int> a(n), b(n), c(n), p(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i]; 
        }
        for (int i = 0; i < n; ++i) {
            cin >> c[i]; 
        }
        p[0] = a[0];
        for (int i = 1; i < n-1; ++i) {
            if (p[i-1] != a[i])
                p[i] = a[i]; 
            else if (p[i-1] != b[i])
                p[i] = b[i]; 
            else 
                p[i] = c[i]; 
        }

        if (a[n-1] != p[n-2] && a[n-1] != p[0])
            p[n-1] = a[n-1]; 
        else if (b[n-1] != p[n-2] && b[n-1] != p[0])
            p[n-1] = b[n-1];
        else  
            p[n-1] = c[n-1];
        
        for (int i = 0; i < n; ++i) {
            cout << p[i] << " "; 
        }
        cout << endl; 
    }
    return 0; 
}