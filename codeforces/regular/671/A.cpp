#include<bits/stdc++.h> 
using namespace std; 

int solve(int n, vector<int> d){
    vector<int> v;
    if (n%2==0){
        for (int i=0; i<n; ++i){
            if (i%2!=0)
                v.push_back(d[i]); 
        }
        for (int i=0; i<v.size(); ++i){
            if (v[i]%2==0)
                return 2; 
        }
        return 1; 
    } else {
        for (int i=0; i<n; ++i){
            if (i%2==0)
                v.push_back(d[i]); 
        }
        for (int i=0; i<v.size(); ++i){
            if (v[i]%2!=0)
                return 1; 
        }
        return 2; 
    }
    

    return 0; 
}

int main(){
    int t; cin >> t; 
    for (int tc=0; tc<t; ++tc){
        int n; cin >> n; 
        string s; cin >> s; 
        vector<int> d(n); 
        for (int i=0; i<n; ++i){
            d[i] = s[i] - '0'; 
        }
        cout << solve(n, d) << endl; 

    }
    return 0; 
}