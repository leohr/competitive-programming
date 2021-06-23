class Solution {
public:
    string simplifyPath(string path) {
        // Add final "/"
        path += "/"; 
        
        // Delete multiple "/" across the string 
        int i = 0; 
        while (i < path.size()-1) {
            while (path[i] == '/' && path[i+1] == '/') {
                path.erase(path.begin() + i); 
            }
            ++i; 
        }
        
        // Edge case 
        if (path.size() == 1) 
            return "/"; 
        
        
        // Get simplified path (as queue)
        stack<string> st; 
        for (i = 0; i < path.size(); ++i) {
            if (i == path.size() - 1) 
                break; 
            
            if (path[i] == '/') {
                int j = i+1; 
                while (path[j] != '/') 
                    ++j; 
                string folder = path.substr(i+1, j-i-1); 
                i = j-1; 
                
                if (folder == ".")
                    continue; 
                
                else if (folder == "..") {
                    if (!st.empty()) 
                        st.pop(); 
                    continue; 
                }
                
                else {
                    st.push(folder); 
                    continue; 
                }
            }
        }
        
        // Reverse the stack 
        stack<string> rst; 
        while (!st.empty()) {
            rst.push(st.top());
            st.pop(); 
        }
        
        // Build simplified path as string
        string newPath = "/";
        while (!rst.empty()) {
            if (newPath == "/")
                newPath += rst.top(); 
            else 
                newPath += "/" + rst.top(); 
            rst.pop(); 
        }
        
        return newPath; 
    }
};