class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = ""; 
        while (word1.size() > 0 && word2.size() > 0) {
            // Add 
            ans += word1[0]; 
            ans += word2[0]; 
            // Erase 
            word1.erase(word1.begin()); 
            word2.erase(word2.begin());
        }
        if (word1.size() == 0) 
            ans += word2; 
        else 
            ans += word1; 
        return ans; 
    }
};