class Solution {
public:
    string toLowerCase(string s) {
        string s2 = ""; 
        for (char c: s) {
            c = tolower(c);
            s2 += c; 
        }
        return s2; 
    }
};