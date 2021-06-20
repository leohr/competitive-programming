class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size(); 
        int pos = -1; 
        for (int i = 0; i < n; ++i) {
            if (int(num[i]) % 2 != 0) 
                pos = i; 
        }
        string ans = ""; 
        for (int i = 0; i <= pos; ++i) {
            ans += num[i]; 
        }
        return ans; 
    }
};