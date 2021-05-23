# include <bits/stdc++.h>
using namespace std; 

int main() {
    int T; cin >> T; 
    for (int tc = 0; tc < T; ++tc) {
        int G; cin >> G; 
        vector<int> v;
        int i = 1; 
        int current = 0;
        int sum = 0; 
        int ans = 0; 
        while (sum < G) {
            if ((G - sum) % i == 0) {
                ++ans;
            }     
            ++i; 
            ++current; 
            sum += current; 
        }
        cout << "Case #" << tc+1 << ": " << ans << endl;
    }
    return 0; 
}

