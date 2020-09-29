# include <bits/stdc++.h>
using namespace std; 

int main() {
    int q; cin >> q; 
    for (int i = 0; i < q; ++i) {
        double a, b; cin >> a >> b; 
        double s1 = floor(sqrt(a)), s2 = floor(sqrt(b)); 
        int ans = floor(sqrt(a)) == sqrt(a) ? s2 - s1 + 1 : s2 - s1; //***
        cout << ans << endl; 
    }
    return 0; 
}

//*** Beware of the case where the interval begins with a perfect square!
