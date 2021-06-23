class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> ans = {};
        string s; 
        // Edge case (no letters)
        if (S.size() == 0) 
            return ans; 
        
        // Just one letter 
        if (S.size() == 1) {
            char s1 = tolower(S[0]); 
            char s2 = toupper(S[0]); 
            if (isalpha(S[0])) {
                s = ""; s.push_back(s1); 
                ans.push_back(s);
                s = ""; s.push_back(s2);                 
                ans.push_back(s);
            } 
            else 
                ans.push_back(S.substr(0));
            return ans; 
        }
        
        // General case (recursion) 
        string Snxt = S.substr(1);  
        vector<string> next = letterCasePermutation(Snxt); 
        // Add lowercase and uppercase letter to the following vector of answers
        if (isalpha(S[0])) {
            char s1 = tolower(S[0]); 
            char s2 = toupper(S[0]); 
            s = ""; s.push_back(s1); 
            ans = next; 
            for (int i = 0; i < ans.size(); ++i) {
                ans[i] = s1 + ans[i]; 
            }
            s = ""; s.push_back(s2); 
            vector<string> ans2 = next; 
            for (int i = 0; i < ans2.size(); ++i) {
                ans2[i] = s2 + ans2[i]; 
            }
            ans.insert(ans.end(), ans2.begin(), ans2.end()); 
        // Just add the first letter to the following vector of answers 
        } else {
            s = S.substr(0, 1); 
            ans = next; 
            for (int i = 0; i < ans.size(); ++i) {
                ans[i] = s + ans[i]; 
            }
        }
        return ans;         
    }
};