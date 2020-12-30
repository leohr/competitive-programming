# include <bits/stdc++.h> 
using namespace std; 

int main(){
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        map<int, int> reps; 
        for (int i = 0; i < n; ++i) {
            int xi; cin >> xi; 
            ++reps[xi]; 
        }
        int ans = 0; 
        for (int i = 0; i < 2*n+10; ++i) {
            if (reps[i] > 0) {
                ++ans; 
                if (reps[i] > 1) 
                    ++reps[i+1]; 
            }
        }
        cout << ans << endl; 
    }
    return 0; 
}