class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size(); 
        set<int> types; 
        for (int i = 0; i < n; ++i) 
            types.insert(candyType[i]);
        int m = types.size(); 
        return min(n/2, m); 
    }
};