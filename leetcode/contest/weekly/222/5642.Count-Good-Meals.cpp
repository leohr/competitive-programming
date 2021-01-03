class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        int ans = 0, N = pow(2, 21); 
        unordered_map<int, int> visited;
        for (int i = 0; i < deliciousness.size(); ++i) {
            int x = 1, d = deliciousness[i];
            while (x <= N) {
                if (visited.find(x-d) != visited.end()) 
                    ans = (ans + visited[x-d]) % 1000000007; 
                x *= 2; 
            }
            ++visited[d]; 
        }
        return ans; 
    }
};