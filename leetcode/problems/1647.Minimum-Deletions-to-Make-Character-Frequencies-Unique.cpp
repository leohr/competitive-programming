class Solution {
public:
    int minDeletions(string s) {
        map<char, int> reps; 
        for (int i = 0; i < s.size(); ++i) {
            ++reps[s[i]]; 
        }
        string letters = "abcdefghijklmnopqrstuvwxyz"; 
        int ans = 0; 
        unordered_map<int, int> used;  
        for (char c: letters) {
            int freq = reps[c]; 
            while (freq > 0 && used[freq] != 0) {
                ++ans; 
                --freq; 
            }
            if (freq > 0 && used[freq] == 0) 
                used[freq] = 1; 
        }
        return ans; 
    }
};