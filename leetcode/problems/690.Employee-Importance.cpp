class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int ans = 0; 
        for (int i = 0; i < employees.size(); ++i) {
            if (employees[i]->id == id) {
                ans += employees[i]->importance; 
                vector<int> v = employees[i]->subordinates; 
                for (int j = 0; j < v.size(); ++j) {
                    ans += getImportance(employees, v[j]);
                }
            }
        }
        return ans; 
    }
};