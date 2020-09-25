#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n, t; cin >> n >> t; 
    vector<int> width(n); 
    for (int i = 0; i < n; ++i) {
        cin >> width[i];  
    }
    for (int tc = 0; tc < t; ++tc) {
        int i, j; cin >> i >> j; 
        cout << *min_element(width.begin()+i, width.begin()+j+1) << endl; 
    }
    return 0; 
}