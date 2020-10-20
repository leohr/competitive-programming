#include<bits/stdc++.h>
using namespace std; 

int main() {   
    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n; cin >> n; 
        vector<int> a(n);
        stack<int> stack1, stack2;  
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
            if (a[i] == a[0])
                stack1.push(i+1); 
            else 
                stack2.push(i+1); 
        }
        if (stack2.empty()) 
            cout << "NO" << endl; 
        else {
            int x = stack2.top(); 
            stack2.pop();
            cout << "YES" << endl; 
            while (!stack1.empty()) {
                cout << x << " " << stack1.top() << endl; 
                stack1.pop(); 
            }
            while (!stack2.empty()) {
                cout << "1 " << stack2.top() << endl; 
                stack2.pop(); 
            }
        }
    }

    return 0; 
}