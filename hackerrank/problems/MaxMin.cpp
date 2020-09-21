#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n); 
    for (int i=0; i<n; ++i)
        cin >> a[i]; 
    
    sort(a.begin(), a.end()); 
    
    set<int> solutions; 
    for (int i=0; i<=n-k; ++i)
        solutions.insert(a[i+k-1] - a[i]); 

    cout << *solutions.begin() << endl; 

    return 0; 
}