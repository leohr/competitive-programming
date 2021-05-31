class Solution {
public:
    int charValue(char c) {
        string abc = "abcdefghijklmnopqrstuvwxyz"; 
        for (int i = 0; i < 26; ++i) {
            if (c == abc[i]) 
                return i; 
        }
        return -1; 
    }
    int stringValue(string word) {
        int p = 1;
        int value = 0; 
        for (int i = word.size()-1; i >= 0; --i) {
            value += charValue(word[i])*p;
            p *= 10; 
        }
        return value; 
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        if (stringValue(firstWord) + stringValue(secondWord) == stringValue(targetWord)) 
            return true; 
        else 
            return false; 
    }
};