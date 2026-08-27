class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string> stk;

        int size = path.size();
        int i = 0;
        while (i < size) { 
            while (i < size && path[i] == '/') {
                ++i;
            }
            if (i >= size) break;
            string directory = "";
            while (i < size && path[i] != '/') {
                directory += path[i];
                ++i;
            }
            // process directory
            if (directory == ".") {
            }
            else if (directory == "..") {
                if (!stk.empty())
                    stk.pop();
            }
            else {
                stk.push(directory);
            }
            ++i;
        }
        string output = "";
        if (stk.empty()) return "/";

        while (!stk.empty()) {
            output = "/" + stk.top() + output;
            stk.pop();
        }
        return output;
    }
};