# include <bits/stdc++.h> 
using namespace std; 

int main() {
    // Precompute numbers 
    const int N = 1010; 
    map<int, vector<int>> solution; 
    int num = 0; 
    solution[0] = {0, 0, 0}; 
    while (num <= N) {
        num += 3; 
        solution[num] = {solution[num-3][0] + 1, solution[num-3][1], solution[num-3][2]}; 
    }
    for (auto s: solution) {
        num = s.first + 5; 
        solution[num] = {solution[num-5][0], solution[num-5][1] + 1, solution[num-5][2]}; 
        if (num > 1010) 
            break; 
    }
    for (auto s: solution) {
        num = s.first + 7; 
        solution[num] = {solution[num-7][0], solution[num-7][1], solution[num-7][2] + 1}; 
        if (num > 1010) 
            break; 
    }

    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        if (solution.find(n) != solution.end()) {
            cout << solution[n][0] << " " << solution[n][1] << " " << solution[n][2] << endl; 
        } else 
            cout << -1 << endl; 
    }
    return 0; 
}