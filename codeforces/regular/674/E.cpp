#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n; cin >> n; 
    int a1, a2, a3; cin >> a1 >> a2 >> a3; 
    int b1, b2, b3; cin >> b1 >> b2 >> b3; 
    int minWins = max(a1 + b2 - n, max(a2 + b3 - n, max(a3 + b1 - n, 0))); 
    int maxWins = min(a1, b2) + min(a2, b3) + min(a3, b1); 
    cout << minWins << " " << maxWins << endl; 
    return 0; 
}