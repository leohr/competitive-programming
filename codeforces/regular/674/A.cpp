#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc){
        int n, x; cin >> n >> x; 
        if (n == 1)
            cout << 1 << endl; 
        else if (n == 2) 
            cout << 1 << endl; 
        else {
            int d = (n-2)/x, r = (n-2)%x; 
            int ans = 1 + d + (r == 0 ? 0 : 1); 
            cout << ans << endl; 
        }
    }
    return 0; 
}