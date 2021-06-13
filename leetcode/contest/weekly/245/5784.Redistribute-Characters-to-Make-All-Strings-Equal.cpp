public:
    bool makeEqual(vector<string>& words) {
        int n = words.size(); 
        map<char, int> mp; 
        for (int i = 0; i < n; ++i) {
            for (auto c: words[i]) {
                ++mp[c]; 
            }
        }
        for (auto e: mp) {
            if (e.second % n != 0) 
                return false; 
        }
        return true; 
    }
};