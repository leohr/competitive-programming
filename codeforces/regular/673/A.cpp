#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc){
        int n, k; cin >> n >> k; 
        vector<int> a(n); 
        for (int i = 0; i < n; ++i){
            cin >> a[i]; 
        }
        sort(a.begin(), a.end()); 
        int ans = 0, m = a[0]; 
        for (int i = n-1; i > 0; --i){
            ans += (k - a[i])/m; 
        }
        cout << ans << endl; 
    }
    return 0; 
}