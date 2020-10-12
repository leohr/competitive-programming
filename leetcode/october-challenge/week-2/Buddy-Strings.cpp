class Solution {
public:
    bool buddyStrings(string A, string B) {
        // If A doesn't have the same number of letters as B, just return false
        int n = A.size(); 
        if (n != B.size()) 
            return false; 
        // Otherwise, there must be, at most, 2 missmatches (at indexes j, k)
        int j = -1, k = -1; 
        for (int i = 0; i < n; ++i) {
            if (A[i] != B[i] && j != -1 && k != -1)
                return false; 
            if (A[i] != B[i] && j != -1 && k == -1) 
                k = i; 
            if (A[i] != B[i] && j == -1) 
                j = i;             
        }
        if (j == -1 && k != -1) // Only one missmatch, answer is false 
            return false; 
        else if (j != -1 && k == -1) 
            return false; 
        else if (j == -1 && k == -1) { 
            // If there are no missmatches, but any letter is repeated,  answer is true
            int maxRep = 0; 
            unordered_map<char, int> reps; 
            for (int i = 0; i < n; ++i) {
                ++reps[A[i]]; 
                maxRep = max(maxRep, reps[A[i]]);
            }
            if (maxRep >= 2)
                return true; 
            else 
                return false; 
        } // Exactly two missmatches, swap and check 
        else if (B[j] == A[k] && A[j] == B[k])
            return true; 
        else 
            return false;         
    }
};