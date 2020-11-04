#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin >> n; 
    int p; cin >> p; 
    cout << min(p/2, (n%2==0 ? (n-p+1)/2 : (n-p)/2)) << endl;
    return 0;  
}