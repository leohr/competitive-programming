class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares; 
        for (int i = 0; i < nums.size(); ++i) {
            squares.push_back(nums[i]*nums[i]); 
        }
        sort(squares.begin(), squares.end()); 
        return squares; 
    }
};