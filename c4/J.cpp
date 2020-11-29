#include<bits/stdc++.h>
using namespace std; 

int main() {
    int tc = 0; 
    while (true) {
        ++tc; 
        int L, P, V; cin >> L >> P >> V; 
        if (L == 0 && P == 0 && V == 0) 
            break; 
        int ans = min(V % P, L) + (V/P)*L; 
        cout << "Case " << tc << ": " <<  ans << endl;  
    }
    return 0; 
}