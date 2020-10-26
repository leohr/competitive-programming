#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int n; cin >> n; 
    vector<int> clouds(n); 
    for (int i = 0; i < n; ++i) {
        cin >> clouds[i]; 
    }
    int ans = 0; 
    int i = 0; 
    while (i < n-1) {
        if (clouds[i+2] == 0) {
            ++ans; 
            i += 2; 
        } else {
            ++ans; 
            i += 1; 
        }
    }
    cout << ans << endl; 
}