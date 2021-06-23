class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        for (int i = 0; i < arr.size(); ++i) {
            bool ok = false; 
            for (int j = 0; j < pieces.size(); ++j) {
                if (pieces[j][0] == arr[i]) {
                    ok = true; 
                    for (int k = 0; k < pieces[j].size(); ++k) {
                        cout << "Comparing: " << pieces[j][k] << "-" << arr[i+k] << endl; 
                        if (pieces[j][k] != arr[i+k])
                            return false; 
                    }
                    i += pieces[j].size()-1; 
                }
            }
            if (!ok) 
                return false; 
        }
        return true; 
    }
};