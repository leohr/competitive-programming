#include <bits/stdc++.h>
using namespace std;

int main() {
    // Get input 
    int n, d; 
    cin >> n >> d; 
    vector<int> arr(n); 
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }
    
    // Solve  
    vector<int> left(arr.begin() + d, arr.end()); 
    vector<int> right(arr.begin(), arr.begin() + d); 
    
    for (int i = 0; i < left.size(); ++i) {
        cout << left[i] << " "; 
    }
    for (int i = 0; i < right.size(); ++i) {
        cout << right[i] << " "; 
    }
    
    return 0;     
}
