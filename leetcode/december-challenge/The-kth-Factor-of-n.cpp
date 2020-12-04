class Solution {
public:
    int kthFactor(int n, int k) {
        int pos = 0; 
        for (int i = 1; i <= n; ++i) { 
            if (n % i == 0) {
                ++pos; 
                if (k == pos) 
                    return i; 
            }
            cout << i << " " << pos << endl;
        }
        return -1; 
    }
};