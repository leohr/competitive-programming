#include<bits/stdc++.h>
using namespace std; 

int main() {
    // Hash table for storing Fibonacci numbers 
    unordered_map<long long, int> fibo; 
    fibo[0] = 1; 
    fibo[1] = 1; 
    long long last1 = 0, last2 = 1, new1; 
    while (new1 < 10e11) {
        new1 = last1 + last2; 
        fibo[new1] = 1; 
        last1 = last2; 
        last2 = new1; 
    }
    // Simply look for the number in the hash table
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc){
        long long n; cin >> n; 
        if (fibo.find(n) == fibo.end())
            cout << "IsNotFibo" << endl; 
        else 
            cout << "IsFibo" << endl; 
    }
    return 0; 
}