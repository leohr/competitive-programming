# include <bits/stdc++.h> 
using namespace std; 

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        vector<int> x(n); 
        for (int i = 0; i < n; ++i) 
            cin >> x[i];
        set<int> areas;  
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                int x1 = x[i]; 
                int x2 = x[j]; 
                areas.insert(x2-x1); 
            }
        }
        cout << areas.size() << endl; 
    }
    return 0; 
}