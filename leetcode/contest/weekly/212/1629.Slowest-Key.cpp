class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size(); 
        map<char, int> times; 
        int maxtime = 0; 
        for (int i = 0; i < n; ++i) { 
            char c = keysPressed[i]; 
            int time = (i == 0 ? releaseTimes[i] : releaseTimes[i] - releaseTimes[i-1]); 
            times[c] = max(times[c], time); 
            maxtime = max(maxtime, time); 
        }
        char ans; 
        for (auto e: times){
            char c = e.first; 
            int time = e.second; 
            if (time == maxtime) 
                ans = c; 
        }
        return ans; 
    }
};