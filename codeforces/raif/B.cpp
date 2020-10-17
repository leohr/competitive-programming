# include <bits/stdc++.h> 
using namespace std; 

// Check clockwise
bool check1(string b) {
    int n = b.size(); 
    for (int i = 0; i < n; ++i) {
        if (b[i] == '<')
            return false; 
    }
    return true; 
}

// Check counter clock wise 
bool check2(string b) {
    int n = b.size(); 
    for (int i = 0; i < n; ++i) {
        if (b[i] == '>')
            return false; 
    }
    return true; 
}

int solve(string b) {
    int n = b.size(); 

    if (check1(b))
        return n; 

    if (check2(b))
        return n; 
    int ans = 0; 
    map<int, int> added; 
    for (int i = 0; i < n; ++i) {
        if (b[i] == '-') { 

            if (added[i] == 0 && added[i+1] == 0 && i < n-1) 
                ans += 2; 
            else if (added[i] == 0 && added[0] == 0 && i == n-1)
                ans += 2; 
            else if (added[i] == 1 && added[0] == 1 && i == n-1) 
                ans += 0; 
            else 
                ans += 1; 
                
            added[i] += 1; 
            added[i+1] += 1; 
        } 
    }
    return ans; 
    
}

int main() {
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        string belts; cin >> belts; 
        cout << solve(belts) << endl; 
    }
    return 0; 
}