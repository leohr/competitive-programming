class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {        
        int ans = 0; 
        int n = A.size(); 
        int i = 0; 
        int j; 
        while (i < n-3) {
            j = i+2; 
            int d1 = A[i+1] - A[i]; 
            int d2 = A[i+2] - A[i+1]; 
            int len = 0; 
            if (d1 == d2) {
                len = 3;
                while (true) {
                    if (j == n-1) 
                        break; 
                    else {
                        ++j; 
                        d2 = A[j] - A[j-1]; 
                        if (d1 == d2) {
                            ++len;   
                        } 
                        else {
                            i = j-1; 
                            break;    
                        } 
                    }
                }
            } else {
                ++i; 
            }
            ans += sum3(len); 
            if (j == n-1) 
                break; 
        }
        if (i == n-3) {
            int d1 = A[i+1] - A[i]; 
            int d2 = A[i+2] - A[i+1];
            if (d1 == d2) 
                ans += 1; 
        }
        return ans; 
    }
    
    int sum3(int n) {
        if (n == 0) 
            return 0; 
        
        int ans = 0; 
        int k = 1; 
        while (k <= n-2) {
            ans += k; 
            ++k; 
        }
        return ans; 
    }
};