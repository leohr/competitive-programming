class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size(); 
        int ans = 0; 
        for (int i = 0, j = n-1; i <= j; --j) {
            if (people[i] + people[j] <= limit) {
                ++ans; 
                ++i; 
            } else {
                ++ans;
            }
        }
        return ans; 
    }
};