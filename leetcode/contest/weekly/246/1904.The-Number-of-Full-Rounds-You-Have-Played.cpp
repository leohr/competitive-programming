class Solution {
public:
    int numberOfRounds(string startTime, string finishTime) {
        int h0 = stoi(startTime.substr(0, 2)); 
        int m0 = stoi(startTime.substr(3, 2)); 
        
        int h1 = stoi(finishTime.substr(0, 2)); 
        int m1 = stoi(finishTime.substr(3, 2)); 
        
        if (h1 < h0) h1 += 24; 
        if (h1 == h0 && m1 < m0) h1 += 24; 
        
        int ans = 0; 
        while (m0 % 15 != 0) {
            ++m0; 
        }
        if (m0 == 60) {
            ++h0; 
            m0 = 0; 
        }       
        ++m0; 
        
        cout << h0 << ":" << m0 << endl; 
        cout << h1 << ":" << m1 << endl; 
        
        while (h0 < h1 || m0 <= m1) {
            if (m0 % 15 == 0) {
                ++ans;
            } 
            
            if (m0 == 60) {
                ++h0; 
                m0 = 0; 
            }
            
            ++m0; 
        }
        
        return ans; 
    }
};