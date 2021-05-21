# include <bits/stdc++.h>
using namespace std; 

int main() {
    int T; cin >> T; 
    for (int tc = 0; tc < T; ++tc) {
        int peaks = 0; 
        int N; cin >> N;
        vector<int> H(N); 
        for (int i = 0; i < N; ++i) {
            cin >> H[i]; 
        }
        for (int i = 1; i < N-1; ++i) {
            if (H[i] > H[i-1] && H[i] > H[i+1]) 
                ++peaks; 
        }
        cout << "Case #" << tc+1 << ": " << peaks << endl; 
    }
    return 0; 
}