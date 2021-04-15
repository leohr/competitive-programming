class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> numsN(n); 
        sort(nums.begin(), nums.end()); 
        for (int i = 0; i < n; ++i) {
            numsN[i] = i+1; 
        }
        vector<int> v(n); 
        vector<int>::iterator it = set_difference(numsN.begin(), numsN.end(), nums.begin(), nums.end(), v.begin()); 
        v.resize(it - v.begin()); 
        return v; 
    }
};