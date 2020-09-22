#include<bits/stdc++.h>
using namespace std; 

int main() {
    string s; cin >> s; 
    int  n = s.size(); 
    map<char, int> reps; 
    for (int i=0; i<n; ++i) {
        ++reps[s[i]]; 
    }
    int odd_reps=0; 
    for (auto let: reps) {
        if (let.second % 2 != 0)
            ++odd_reps; 
    }
    if (n % 2 == 0) {
        if (odd_reps == 0)
            cout << "YES" << endl; 
        else 
            cout << "NO" << endl;    
    } else {
        if (odd_reps == 1)
            cout << "YES" << endl; 
        else 
            cout << "NO" << endl; 
    }
    return 0; 
}