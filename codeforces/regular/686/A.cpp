#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        for (int i = 0; i < n-1; ++i) {
            cout << i+2 << " "; 
        }
        cout << 1 << endl; 
    }
    return 0; 
}