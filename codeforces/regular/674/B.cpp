#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc){
        int n, m; cin >> n >> m;
        bool ok = false;  
        for (int i = 0; i < n; ++i){
            int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4; 
            if (a2 == a3)
                ok = true; 
        }
        if (m % 2 != 0)
            ok = false; 
        string ans = (ok? "YES" : "NO"); 
        cout << ans << endl; 
    }
    return 0; 
}