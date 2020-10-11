class Solution {
public:
    bool check1(string a, string b) {
        int n = a.size(); 
        bool ok = true; 
        for (int i = 0; i < n/2; ++i) {
            if (a[i] != b[n-1-i] && ok)
                ok = false; 
            if (b[i] != b[n-1-i] && !ok)
                return false; 
        }
        return true; 
    }
    
    bool check2(string a, string b){
        int n = a.size(); 
        bool ok = true; 
        for (int i = 0; i < n/2; ++i) {
            if (b[n-1-i] != a[i] && ok)
                ok = false; 
            if (a[n-1-i] != a[i] && !ok)
                return false;
        }
        return true; 
    }
    bool checkPalindromeFormation(string a, string b) {
        
        if (check1(a, b))
            return true; 
        if (check1(b, a))
            return true; 
        if (check2(a, b))
            return true; 
        if (check2(b, a))
            return true; 
        
        return false; 
    }
};