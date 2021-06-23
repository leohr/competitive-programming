class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size(); 
        
        // Edge case 
        if (n == 0) 
            return ""; 
        
        // Create empty matrix for DP 
        vector<vector<int>> v(n); 
        for (int i = 0; i < n; ++i) {
            vector<int> u(n); 
            v[i] = u; 
            // Fill below the diagonal 
            for (int j = 0; j <= i; ++j) {
                v[i][j] = 1; 
            }
        }
        
        // Fill the matrix and keep track of current answer
        string ans = s.substr(0, 1); 
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j+i >= n) 
                    continue; 
                v[j][j+i] = (s[j] == s[j+i] && v[j+1][j+i-1] ? 1 : 0); 
                if (i+1 > ans.size() && v[j][j+i] == 1) {
                    ans = s.substr(j, i+1); 
                    cout << "new ans: " << ans << endl; 
                }
            }
        }
        
        // Return output 
        return ans; 
    }
};

// Kind of DP solution: 
// - Create a matrix of nxn in order to 
// store if s[i:j] is a palindrome. 
// - In order to check if s[i:j] is a palindrome, 
// check if s[i] == s[j] and also if s[i+1:j-1] is a palindrome 
// - Fill in diagonal from top-left to bottom-right in order 
// to make sense 
