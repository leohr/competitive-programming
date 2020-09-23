#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin >> n; 
    vector<long long> a(n), c(n); 
    for (int i=0; i<n; ++i) {
        cin >> a[i];
        c[i] = 1; // Init: 1 candy for each student
    }
    // Give more candies from left to right
    for (int i=1; i<n; ++i){
        if (a[i] > a[i-1] && c[i] <= c[i-1])
            c[i] = c[i-1] + 1; 
    }
    // Give more candies from right to left
    for (int i=n-2; i>=0; --i) {
        if (a[i] > a[i+1] && c[i] <= c[i+1])
            c[i] = c[i+1] +1; 
    }
    // Output number of candies
    long long ans = 0; 
    for (int i=0; i<n; ++i) {
        ans += c[i]; 
    }
    cout << ans << endl; 
    return 0; 
}