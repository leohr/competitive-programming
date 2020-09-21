#include <bits/stdc++.h> 
using namespace std; 

int main(){
    string s1, s2; cin >> s1 >> s2; 

    map<char, int> d; 
    for (int i=0; i<s1.size(); ++i){
        ++d[s1[i]]; 
    }

    int ans = 0; 
    for (int i=0; i<s2.size(); ++i){
        char let = s2[i]; 
        if (d[let] > 0)
            --d[let]; 
        else 
            ++ans; 
    }

    for (auto let: d){
        ans += let.second; 
    }

    cout << ans << endl; 
    return 0; 
}