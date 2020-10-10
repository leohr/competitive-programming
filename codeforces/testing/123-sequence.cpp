# include <bits/stdc++.h> 
using namespace std; 

int main() {
    int n; cin >> n; 
    int one = 0, two = 0, three = 0;
    for (int i = 0; i < n; ++i) {
        int ai; cin >> ai; 
        if (ai == 1) 
            ++one; 
        else if (ai == 2)
            ++two; 
        else 
            ++three; 
    } 

    int ans; 
    if (one >= two && one >= three) 
        ans = two + three; 
    else if (two >= one && two >= three)
        ans = one + three; 
    else 
        ans = one + two; 
    cout << ans << endl; 
    
    return 0; 
}