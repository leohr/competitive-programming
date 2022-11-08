class Solution {
public:
    int isGood(string s){
        int n = s.size(); 
        for (int i=0; i<n-1; ++i){
            if (islower(s[i]) && toupper(s[i]) == s[i+1])
                return i; 
            if (isupper(s[i]) && tolower(s[i]) == s[i+1])
                return i; 
        }
        return -1; 
    }
    
    string makeGood(string s) {
        int pos = isGood(s); 
        while (pos >= 0){
            s.erase(pos, 2); 
            pos = isGood(s); 
        }
        
        return(s); 
    }
};
