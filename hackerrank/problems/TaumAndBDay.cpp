#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        long long b, w; cin >> b >> w; 
        long long bc, wc, z; cin >> bc >> wc >> z; 
        long long bc2 = wc + z, wc2 = bc + z; 
        long long ans1 = (bc2 > bc ? bc : bc2)*b; 
        long long ans2 = (wc2 > wc ? wc : wc2)*w; 
        cout << ans1 + ans2 << endl; 
    }
    return 0; 
}