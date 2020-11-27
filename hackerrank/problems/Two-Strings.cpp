#include<bits/stdc++.h>
using namespace std; 

string solve(string s1, string s2) {
    unordered_map<char, int> m; 
    for (int i = 0; i < s1.size(); ++i) {
        ++m[s1[i]]; 
    }
    for (int i = 0; i < s2.size(); ++i) {
        if (m[s2[i]] > 0) 
            return "YES";  
    }

    return "NO"; 
}

int main() {
    int p; cin >> p; 
    for (int tc = 0; tc < p; ++tc) {
        string s1; cin >> s1;
        string s2; cin >> s2;  
        cout << solve(s1, s2) << endl; 
    }
    return 0; 
}