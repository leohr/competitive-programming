# include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        int sum = 0; 
        for (int i = 0; i < n; ++i) {
            int ai; cin >> ai; 
            sum += ai; 
        }
        if (sum < 0) 
            cout << "NO" << endl; 
        else 
            cout << "YES" << endl; 
    }
    return 0; 
}