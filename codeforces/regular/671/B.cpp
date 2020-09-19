#include<bits/stdc++.h> 
using namespace std; 

int main(){

    vector<long long> S(30), B(30), C(30); 
    S[0] = 1; S[1] = 6;  
    B[0] = 1; B[1] = 3;  
    C[0] = 1; C[1] = 7; 
    for (int i=2; i<30; ++i){
        S[i] = 2*S[i-1] + (B[i-1] + 1)*(B[i-1] + 1); 
        B[i] = 2*B[i-1] + 1; 
        C[i] = S[i] + C[i-1]; 
    }

    int t; cin >> t; 
    for (int tc=0; tc<t; ++tc){
        long long x; cin >> x; 
        int k=1; 
        while (C[k] < x){
            ++k; 
            if (k==30)
                break; 
        }
        int ans = (C[k] == x ? k+1 : k); 
        cout << ans << endl; 
    }

    return 0; 
}