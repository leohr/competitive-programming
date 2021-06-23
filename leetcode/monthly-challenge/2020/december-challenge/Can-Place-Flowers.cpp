class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int placed = 0; 
        if (flowerbed.size() == 1) {
            if (n > 1) 
                return false; 
            if (n == 1) {
                if (flowerbed[0] == 1) 
                    return false; 
                else 
                    return true; 
            }
            if (n == 0) 
                return true; 
        }
        for (int i = 0; i < flowerbed.size(); ++i) {
            if (i == 0) { 
                if (flowerbed[i] == 0 & flowerbed[i+1] == 0) {
                    flowerbed[i] = 1;
                    ++placed; 
                }
            }
            else if (i == flowerbed.size()-1) {
                if (flowerbed[i-1] == 0 & flowerbed[i] == 0) {
                    flowerbed[i] = 1; 
                    ++placed; 
                }
            }
            else {
                if (flowerbed[i-1] == 0 & flowerbed[i] == 0 & flowerbed[i+1] == 0) {
                    flowerbed[i] = 1; 
                    ++placed; 
                }
            }     
            if (placed >= n) 
                return true;
        } 
        return false;
    }
    
};