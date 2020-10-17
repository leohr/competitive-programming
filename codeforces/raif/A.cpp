# include <bits/stdc++.h> 
using namespace std; 

long long solve(long long x1, long long y1, long long x2, long long y2) {
    if (x1 == x2 && y1 != y2) 
        return llabs(y2 - y1); 
    else if (x1 != x2  && y1 == y2) 
        return llabs(x2 - x1); 
    else if (x1 == x2 && y1 == y2) 
        return 0; 
    else 
        return llabs(x2 - x1) + llabs(y2 - y1) + 2; 
}

int main() {
    int t; cin >> t; 
    for (int tc=0; tc < t; ++tc) {
        long long x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2; 
        cout << solve(x1, y1, x2, y2) << endl; 
    }
    return 0; 
}