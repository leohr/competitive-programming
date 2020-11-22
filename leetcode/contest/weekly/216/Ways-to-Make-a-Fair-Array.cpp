class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int oddSum = 0, evenSum = 0; 
        int n = nums.size(); 
        vector<int> v(n); 
        for (int i = n-1; i >= 0; --i) {
            if (i % 2 == 0) {
                evenSum += nums[i];
                v[i] = evenSum;
            }
            else {
                oddSum += nums[i]; 
                v[i] = oddSum; 
            }
        }
        int ans = 0;  
        cout << endl;  
        for (int i = 0; i < n; ++i) {
            cout << i << endl; 
            int s1, s2; 
            if (i == n-1) {
                if (i % 2 == 0) {
                    s1 = evenSum - v[i]; 
                    s2 = oddSum; 
                    if (s1 == s2) 
                        ++ans; 
                } else {
                    s1 = evenSum; 
                    s2 = oddSum - v[i]; 
                    if (s1 == s2) 
                        ++ans; 
                }                
                break; 
            }
            if (i == n-2) {
                if (i % 2 == 0) {
                    s1 = evenSum - v[i] + v[i+1]; 
                    s2 = oddSum - v[i+1]; 
                    if (s1 == s2) 
                        ++ans; 
                } else {
                    s1 = evenSum - v[i+1]; 
                    s2 = oddSum - v[i] + v[i+1]; 
                    if (s1 == s2) 
                        ++ans; 
                }                
                continue; 
            }
            if (i % 2 == 0) {
                s1 = evenSum - v[i] + v[i+1]; 
                s2 = oddSum + v[i+2] - v[i+1]; 
                if (s1 == s2) 
                    ++ans; 
            }
            else {
                s1 = evenSum + v[i+2] - v[i+1]; 
                s2 = oddSum - v[i] + v[i+1];
                if (s1 == s2) 
                    ++ans; 
            }
        }
        return ans; 
    }
};