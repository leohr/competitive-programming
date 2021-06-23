class RecentCounter {
    
public:
    int totalpings; 
    map<int, int> pings; 
    
    RecentCounter() {
        totalpings = 0; 
    }
    
    int ping(int t) {
        ++totalpings; 
        pings[t] = totalpings;
        int last; 
        if (t - 3001 < pings.begin()->first){
            last = 0; 
        } else if (pings.find(t-3001) == pings.end()){
            last = pings.lower_bound(t-3000)->second-1; 
        } else {
            last = pings[t-3001];
        }
        cout << "last: " << last << endl; 
        cout << "totalpings: " << totalpings << endl; 
        int ans = totalpings-last;
        return ans; 
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */