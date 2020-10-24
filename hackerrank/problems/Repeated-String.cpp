#include<bits/stdc++.h> 
using namespace std; 

int main() {
    // Read input 
    string s; cin >> s; 
    int m = s.size(); 
    long long n; cin >> n;
    // Count the number of a's in s 
    long long num = 0; 
    for (int i = 0; i < m; ++i) if (s[i] == 'a') ++num; 
    // The answer is just the number of repetitions in a times the number of 
    // repetitions of s plus the remainings a's... 
    long long ans = num*(n/m); 
    for (long long i = 0; i < (n%m); ++i) {
        if (s[i] == 'a') 
            ++ans; 
    }
    cout << ans << endl; 
    return 0; 
}