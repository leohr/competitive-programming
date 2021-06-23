class Solution {
public:
    int bitwiseComplement(int N) {
        if (N == 0) 
            return 1; 
        
        int top = 1; 
        while (top - 1 < N) 
            top*=2; 
        return top - 1 - N; 
    }
};