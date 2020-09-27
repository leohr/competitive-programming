#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int T; cin >> T; 
    for (int tc = 0; tc < T; ++tc){
        int n, t; cin >> n >> t; 
        vector<long long> a(n);
        int ans;   
        unordered_map<long long, int> choice; 
        int half = 0; 
        for (int i = 0; i < n; ++i){
            cin >> a[i]; 
            if (t%2 == 0 && a[i] == t/2 && half == 0){
                ans = 0; 
                half = 1; 
            } else if (t%2 == 0 && a[i] == t/2 && half == 1){
                ans = 1;
                half = 0;  
            } else if (choice[a[i]] == 0){
                choice[t-a[i]] = 1; 
                ans = 0; 
            } else {
                ans = 1; 
            }
            cout << ans << " ";
        }
        cout << endl; 
    }
    return 0; 
}