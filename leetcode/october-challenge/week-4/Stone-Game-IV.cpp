class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool> win(n+1); 
        for (int i = 0; i <= n; ++i) {
            if (i == 0) 
                win[i] = 0; 
            else {
                int x = 1; 
                bool alice = false; 
                while (x*x <= i) {
                    if  (win[i-x*x] == 0) {
                        win[i] = 1; 
                        alice = true; 
                        break;
                    }
                    ++x; 
                }
                if (!alice) 
                    win[i] = 0; 
            }
        }
        return win[n]; 
    }
};