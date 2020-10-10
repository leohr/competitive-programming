# include <bits/stdc++.h> 
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        vector<int> a(n); 
        int sum = 0; 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i]; 
        }
        if (sum == 0) 
            cout << "NO" << endl; 
        else {
            sort(a.begin(), a.end()); 
            vector<int> a2(2*n); 
            for (int i = 0; i < n; ++i) {
                a2[i] = a[i]; 
                a2[i+n] = a[i]; 
            }
            bool ok; 
            for (int i = 0; i < n; ++i) {
                int sum = 0; 
                ok = true; 
                for (int j = 0; j < n; ++j) {
                    sum += a2[i+j]; 
                    if (sum == 0) {
                        ok = false; 
                        break; 
                    }
                }
                if (ok) {
                    cout << "YES" << endl; 
                    for (int j = 0; j < n; ++j) {
                        cout << a2[i+j] << " " ; 
                    }
                    cout << endl; 
                    break; 
                }
            }
            if (!ok) { 
                cout << "NO" << endl; 
            }
        }
    }
}