#include<bits/stdc++.h> 
using namespace std; 

int main() {
    int n, k; cin >> n >> k; 
    vector<int> bill(n); 
    for (int i = 0; i < n; ++i) {
        cin >> bill[i]; 
    }
    int charged; cin >> charged; 
    int sum = 0; 
    for (int i = 0; i < n; ++i) {
        if (i != k) 
            sum += bill[i]; 
    }
    sum = sum/2; 
    if (sum == charged) 
        cout << "Bon Appetit" << endl; 
    else 
        cout << max(charged - sum, 0) << endl; 
    return 0; 
}