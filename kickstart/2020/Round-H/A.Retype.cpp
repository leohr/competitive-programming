#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc){
        int n, k, s; cin >> n >> k >> s; 
        int opt1 = n + 1; 
        int opt2 = k - s + n - s + 1; 
        cout << "Case #" << tc+1 << ": " << min(opt1, opt2) + k-1 << endl; 
    }
    return 0; 
}