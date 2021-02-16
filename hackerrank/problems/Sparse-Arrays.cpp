# include <bits/stdc++.h>
using namespace std; 

int main() {
    // Get input 
    int n; cin >> n; 
    vector<string> strings(n); 
    for (int i = 0; i < n; ++i) {
        cin >> strings[i]; 
    }
    int q; cin >> q; 
    vector<string> queries(q); 
    for (int i = 0; i < q; ++i) {
        cin >> queries[i]; 
    }
    // Get map of strings frequency 
    map<string, int> mp; 
    for (int i = 0; i < n; ++i) {
        ++mp[strings[i]]; 
    }
    // Print answer  
    for (int i = 0; i < q; ++i) {
        cout <<  mp[queries[i]] << endl; 
    }
}