#include<bits/stdc++.h> 
using namespace std; 

int main(){
    int n; cin >> n;
    vector<int> a(n);  
    for (int i=0; i<n; ++i){
        cin >> a[i]; 
    }
    sort(a.begin(), a.end()); 

    vector<int> b(n);
    for (int i=0; i<n/2; ++i){
        b[2*i] = a[n-1-i]; 
        b[2*i+1] = a[i]; 
    }
    if (n%2!=0){
        b[n-1] = a[n/2];  
    }

    int ans = 0; 
    for (int i=1; i<n-1; ++i){
        if (b[i-1] > b[i] && b[i] < b[i+1])
            ++ ans; 
    }

    cout << ans << endl; 
    for (int i=0; i<n; ++i){
        cout << b[i] << " "; 
    }
    cout << endl; 

    return 0; 
}