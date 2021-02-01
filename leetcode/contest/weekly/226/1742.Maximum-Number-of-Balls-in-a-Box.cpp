class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int, int> box; 
        int ans = 0; 
        for (int i = lowLimit; i <= highLimit; ++i) {
            int n = i; 
            int digitSum = 0; 
            while (n > 0) {
                digitSum += n % 10; 
                n = n /10 ; 
            }   
            ++box[digitSum]; 
            ans = max(ans, box[digitSum]); 
        }
        return ans; 
    }
};