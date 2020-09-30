#include <bits/stdc++.h> 
using namespace std; 

int main(){
    cout.precision(17);

    int t; cin >> t; 
    for (int tc = 0; tc < t; ++tc) {
        int n, l; cin >> n >> l; 
        vector<long double> a(n); 
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        } 
        // Get the time each car arrives to the flags 
        vector<long double> f1(n), f2(n); 
        for (int i = 0; i < n; ++i) {
            if (i == 0){
                f1[i] = a[i];
                f2[i] = l - a[n-1]; 
            }
            else {
                f1[i] = (a[i] - a[i-1])/(i+1) + f1[i-1]; 
                f2[i] = (a[n-i] - a[n-1-i])/(i+1) + f2[i-1]; 
            }

        }
                
        // Get interval where the cars meet 
        int i = 0, j = 0, cov = 0; 
        long double pos1 = 0, pos2 = l; 
        long double lastTime1=0, lastTime2=0; 
        while (cov < n) {
            if (f1[i] < f2[j]){
                ++i; 
                lastTime2 = lastTime1;
                lastTime1 = f1[i-1]; 
                pos1 = a[i-1];
                pos2 -= (j+1)*(lastTime1 - lastTime2);  
            }
            else if (f2[j] < f1[i]){
                ++j; 
                lastTime2 = lastTime1;
                lastTime1 = f2[j-1];

                pos2 = a[n-j];
                pos1 += (i+1)*(lastTime1 - lastTime2); 
            }
            else {
                ++i; ++j; ++cov; 
                lastTime2 = lastTime1;
                lastTime1 = f1[i-1]; 
                pos1 = a[i-1];
                pos2 = a[n-j];
            } 
            ++cov;  
        } 
        // cout << "Left car goes through " << i << " flags." << endl; 
        // cout << "Left car goes through " << j << " flags." << endl; 
        // cout << "Pos1: " << pos1 << endl; 
        // cout << "Pos2: " << pos2 << endl;    
        // cout << "Last flag at time: " << lastTime1 << endl; 

        // Get answer
        long double ans; 
        if (fabs(pos2 - pos1) < FLT_EPSILON){ // 
            ans = lastTime1; 
        } else {
            int v1 = 1 + i; 
            int v2 = 1 + j; 
            long double x = (v1*pos2 + v2*pos1)/(v1 + v2); // Crossing position
            ans = (x - pos1)/v1 + lastTime1; // Corssing time 
        }
        cout << ans << endl; 

    }
        
    return 0; 
}