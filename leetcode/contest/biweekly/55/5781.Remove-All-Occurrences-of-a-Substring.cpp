class Solution {
public:
    string removeOccurrences(string s, string part) {
        int l = part.size(); 
        int pos = s.find(part);
        while (pos != string::npos) {
            s.erase(pos, l); 
            pos = s.find(part); 
        }        
        return s; 
    }
};