#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin >> n; 
    vector<int> orders(n), time(n); 
    for (int i = 0; i < n; ++i) {
        cin >> orders[i]; 
        cin >> time[i]; 
    }
    vector<vector<int>> deliver(n); 
    for (int i = 0; i < n; ++i) {
        vector<int> v(2);
        deliver[i] = v; 
        deliver[i][0] = orders[i] + time[i]; 
        deliver[i][1] = i+1; 
    }
    sort(deliver.begin(), deliver.end()); 
    for(int i = 0; i < n; ++i) {
        cout << deliver[i][1] << " "; 
    }
    return 0; 
}