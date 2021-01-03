class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int> & a, vector<int> & b) { return a[1] > b[1] ; });
        
        int k = truckSize; 
        int i = 0; 
        int ans = 0; 
        while (k > 0 & i < boxTypes.size()) {
            int boxNum = min(k, boxTypes[i][0]); 
            k -= boxNum; 
            ans += boxNum*boxTypes[i][1]; 
            ++i;    
        }
        return ans; 
    }
};