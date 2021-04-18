# include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc){
        int N, K; cin >> N >> K; 
        string s; cin >> s; 
        int goodnes = 0; 
        for (int i = 0; i < N/2; ++i) {
            if (s[i] != s[N-1-i]) 
                ++goodnes; 
        }
        cout << "Case #" << tc+1 << ": ";
        cout << abs(goodnes - K) << endl;
    }
    return 0;
}