#include<bits/stdc++.h>
using namespace std; 

int main() {
    // Get input 
    int n; cin >> n; 
    string path; cin >> path; 
    // Solve 
    int position = 0; // Storing current position 
    int ans = 0; // Count number of valleys  
    for (int i = 0; i < n; ++i) {
        if (position == 0 && path[i] == 'D') 
            ++ans; 
        if (path[i] == 'D') 
            --position; 
        else 
            ++position; 
    }
    cout << ans << endl; 
}