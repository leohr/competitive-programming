#include <bits/stdc++.h> 
using namespace std; 

int main() {
    // Read input 
    int n, k; cin >> n >> k; 
    vector<int> arr(n); 
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }
    // Assign problems to each page: 
    int currPage = 1; 
    map<int, vector<int>> pages; 
    for (int i = 0; i < n; ++i) {
        int problems = arr[i], currPageProblems = 0; 
        for (int j = 0; j < problems; ++j) {
            if (currPageProblems < k) {
                pages[currPage].push_back(j+1); 
                ++currPageProblems;
                continue; 
            } else {
                ++currPage; 
                pages[currPage].push_back(j+1); 
                currPageProblems = 1; 
            }
        }
        ++currPage; 
        currPageProblems = 0; 
    }
    // Count special pages:
    int ans = 0; 
    for (auto p: pages) {
        for (auto pr: p.second) {
            if (p.first == pr)
                ++ ans; 
        }
    }
    cout << ans << endl; 
    return 0; 
}