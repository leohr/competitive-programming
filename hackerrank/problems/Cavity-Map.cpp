#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin >> n;
    vector<string> depth(n);  
    for (int i = 0; i < n; ++i) {
        cin >> depth[i]; 
    }
    vector<vector<int>> cavs; 
    for (int i = 1; i < n-1; ++i) {
        vector<int> v(2); 
        for (int j = 1; j < n-1; ++j) {
            char val = depth[i][j];
            if (val > depth[i][j-1] && val > depth[i-1][j] && 
                val > depth[i][j+1] && val > depth[i+1][j]) { 
                    v[0] = i; 
                    v[1] = j;
                    cavs.push_back(v);  
                }
        }
    }
    int k = 0; 
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < n; ++j) {
            if (k < cavs.size() && i == cavs[k][0] && j == cavs[k][1]) {
                cout << "X" ; 
                ++k; 
            } else {
                cout << depth[i][j]; 
            }
        }
        cout << endl; 
    }
    return 0; 
}