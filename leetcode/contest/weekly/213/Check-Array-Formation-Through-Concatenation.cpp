class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        vector<int> myArr; 
        while (myArr.size() < arr.size()){ 
            bool ok = false; 
            for (int i = 0; i < pieces.size(); ++i) {
                if (pieces[i][0] == arr[myArr.size()]) {
                    ok = true; 
                    for (int j = 0; j < pieces[i].size(); ++j){
                        myArr.push_back(pieces[i][j]); 
                    }
                    break; 
                }
            }
            if (ok == false) 
                break; 
        }
        bool ans = (myArr.size() == arr.size() ? true : false); 
        return ans;  
    }
};