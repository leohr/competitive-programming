class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size(); 
        
        // Count number of appearances of each character in string s
        map<char, int> reps; 
        for (int i = 0; i < n; ++i) {
            ++reps[s[i]];  
        }
        
        // Initialize ans as an empty string 
        string ans = ""; 
        // For checking if a caracter is already in the answer
        map<char, bool> inAns; 
        
        for (int i = 0; i < n; ++i) {
            char c = s[i]; // Current character 
            char last = ans[ ans.size()-1 ]; // Last character of the current answer 
            
            // Delete last character of solution if it is greater than the current and it 
            // is going to appear in the future
            while (ans.size() > 0 && last > c && reps[last] > 0 && !inAns[c]) {
                ans.erase(ans.size()-1); 
                inAns[last] = false;
                last = ans[ ans.size()-1 ];
            }
            
            // Add character to the answer if it is not already in 
            if (!inAns[c]) {
                ans += c; 
                inAns[c] = true; 
            }
            
            // Decrease the number of future appearances 
            --reps[s[i]]; 
            
        }
        return ans; 
    }
};