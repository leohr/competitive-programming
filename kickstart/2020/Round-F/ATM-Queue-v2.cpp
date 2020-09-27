# include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc){
        int n, x; cin >> n >> x; 
        vector<int> a(n); 
        vector<vector<int>> order(n); 
        for (int i = 0; i < n; ++i){
            cin >> a[i];
            int rounds = a[i]/x; 
            int r = a[i] % x;  
            if (r == 0) 
                --rounds; 
            order[i].push_back(rounds); 
            order[i].push_back(i); 
        }
        sort(order.begin(), order.end()); 
        cout << "Case #" << tc+1 << ": "; 
        for (int i = 0; i < n; ++i){
            cout << order[i][1] + 1 << " "; 
        }
        cout << endl; 
    }
    return 0;
}