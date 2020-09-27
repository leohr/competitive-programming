# include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc){
        int n, x; cin >> n >> x; 
        queue<int> q; 
        vector<int> a(n), ans; 
        for (int i = 0; i < n; ++i){
            cin >> a[i]; 
            q.push(i+1); 
        }
        while (!q.empty()){
            int current = q.front(); 
            if (a[current-1] <= x){
                ans.push_back(current);
                q.pop(); 
            } else {
                q.push(current); 
                a[current-1] -= x; 
                q.pop(); 
            }
        }
        cout << "Case #" << tc+1 << ": "; 
        for (int i = 0; i < n; ++i){
            cout << ans[i] << " "; 
        }
        cout << endl; 
    }
    return 0;
}