#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int a, b; cin >> a >> b; 
        string m; cin >> m; 
        vector<int> lens;  
        bool costly = (m[0] == '1' ? true : false); 
        for (int i = 1; i < m.size(); ++i) {
            if (m[i] == '1')
                costly = true; 
            int l = 0; 
            if (m[i] == '0' && m[i-1] == '1') {
                while (m[i] == '0' && i < m.size()) { 
                    ++l; 
                    ++i; 
                }
                if (i < m.size() && m[i] == '1') 
                    lens.push_back(l); 
                if (i == m.size())
                    break; 
            }
        }
        int ans = (costly ? a : 0); 
        for (int i = 0; i < lens.size(); ++i) {
            int x = lens[i]; 
            ans += (a < x*b ? a : x*b ); 
        }
        cout << ans << endl; 
    }
    return 0; 
}