#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        for (int i = 0; i < n; ++i) {
            cout << 2*n + 2*(i+1) << " "; 
        }
        cout << endl; 
    }
    return 0; 
}