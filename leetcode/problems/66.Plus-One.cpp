class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); 
        digits[n-1] += 1; 
        for (int i = n-1; i >= 0; --i) {
            if (digits[i] == 10 && i > 0) {
                digits[i] = 0; 
                digits[i-1] += 1; 
            } else if (digits[i] == 10 && i == 0){
                digits[i] = 0; 
                digits.insert(digits.begin(), 1); 
            } else 
                break; 
        }
        return digits; 
    }
};