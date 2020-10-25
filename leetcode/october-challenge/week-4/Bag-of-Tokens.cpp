class Solution {
public:
    void move(vector<int> &tokens, int &P, int &ans) {
        if (P >= tokens[0]) {
            ++ans; 
            P -= tokens[0]; 
            tokens.erase(tokens.begin()); 
            return; 
        } 
        if (ans >= 1) {
            --ans; 
            P += tokens[tokens.size()-1]; 
            tokens.erase(tokens.begin() + tokens.size() - 1); 
            return; 
        }
        if (ans == 0) 
            tokens.clear(); 
    }
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin(), tokens.end()); 
        int ans = 0, current = 0; 
        while (!tokens.empty()) {
            move(tokens, P, current);
            ans = max(ans, current); 
        } 
        return ans; 
    }
};