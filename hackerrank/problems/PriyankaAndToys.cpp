#include<bits/stdc++.h> 
using namespace std; 

int main() { 
    int n; cin >> n; 
    vector<int> w(n); 
    for (int i = 0; i < n; ++i)
        cin >> w[i]; 
    sort(w.begin(), w.end()); 
    int ans = 1, last = w[0];  
    for (int i = 1; i < n; ++i){
        if (w[i] - last <= 4)
            continue; 
        else {
            ++ans; 
            last = w[i];  
        }
    }
    cout << ans << endl; 
    return 0; 
}