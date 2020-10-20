#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int x; cin >> x; 
        string s = to_string(x); 
        int l = s.size(); 
        int r = x % 10;
        cout << 10*(r-1) + l*(l+1)/2 << endl; 
    }
    return 0; 
}