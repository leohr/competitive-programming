# include <bits/stdc++.h>
using namespace std; 

int main(){
    int T; cin >> T; 
    for (int tc = 0; tc < T; ++tc) {
        int N, B; cin >> N >> B; 
        vector<int> A(N); 
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; 
        }
        sort(A.begin(), A.end()); 
        int ans = 0; 
        for (int i = 0; i < N; ++i) {
            if (A[i] <= B) {
                ++ans; 
                B -= A[i]; 
            }
        }
        cout << "Case #" << tc+1 << ": " << ans << endl; 
    }
    return 0;
}