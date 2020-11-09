#include<bits/stdc++.h> 
using namespace std; 

int main() { 
    int n; cin >> n; 
    map<int, int> reps;
    int max_reps = 0;  
    for (int i = 0; i < n; ++i) {
        int ai; cin >> ai; 
        ++reps[ai];
        max_reps = max(max_reps, reps[ai]);  
    }
    int ans = 0; 
    int ok = true; 
    for (auto e: reps) {
        if (e.second == max_reps && ok) {
            ok = false; 
            continue; 
        }
        ans += e.second; 
    }
    cout << ans << endl; 
    return 0; 
}