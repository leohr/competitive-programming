#include<bits/stdc++.h>
using namespace std; 

string solve(int n, int k, vector<int> a, vector<int> b){
    sort(a.begin(), a.end()); 
    sort(b.begin(), b.end(), greater<int>()); 

    for (int i=0; i<n; ++i){
        if (a[i] + b[i] < k)
            return "NO"; 
    }

    return "YES"; 
}

int main(){
    int q; cin >> q; 
    for (int qi=0; qi<q; ++qi){
        int n, k; cin >> n >> k; 
        vector<int> a(n), b(n); 
        for (int i=0; i<n; ++i) 
            cin >> a[i]; 
        for (int i=0; i<n; ++i)
            cin >> b[i]; 
        
        string ans = solve(n, k, a, b); 
        cout << ans << endl; 
    }
    return 0; 
}