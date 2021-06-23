class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0; 
        while (n>0) {
            if ((n&1)>0) // Check if first bit is 1 
                ++ans; 
            n = n >> 1; // Move 1 bit to the right 
        }
        return ans; 
    }
};