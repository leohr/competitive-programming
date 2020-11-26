#include<bits/stdc++.h>
using namespace std; 

// This funcion returns -1 if s is a palindrome or the 
// position of the first index making s not a palindrome 
int isPalindrome(string s) {
    int n = s.size(); 
    for (int i = 0; i < n; ++i) {
        if (s[i] != s[n-1-i]) {
            return i; 
        }
    }
    return -1; 
}

// This function solves the problem statement
int palindromeIndex(string s) {
    int n = s.size(); 
    int x = isPalindrome(s); 
    if (x == -1) 
        return -1; 
    string s1 = s;
    s1.erase(x, 1); 
    if (isPalindrome(s1) == -1) 
        return x;
    string s2 = s;  
    s2.erase(n-1-x, 1);
    if (isPalindrome(s2) == -1) 
        return (n-1-x); 
    return -1;     
}

int main() {
    int q; cin >> q; 
    for (int query = 0; query < q; ++query) {
        string s; cin >> s; 
        int ans = palindromeIndex(s);
        cout << ans << endl;  
    }
    return 0; 
}