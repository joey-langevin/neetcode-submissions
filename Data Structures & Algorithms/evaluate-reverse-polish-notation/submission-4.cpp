class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        vector<int> stk;

        for (string& s : tokens) {
            if (s == "+") {
                int y = stk.back(); stk.pop_back();
                int x = stk.back(); stk.pop_back();
                int res = x + y;
                stk.push_back(res);
            }
            else if (s == "-") {
                int y = stk.back(); stk.pop_back();
                int x = stk.back(); stk.pop_back();
                int res = x - y;
                stk.push_back(res);
            }
            else if (s == "/") {
               int y = stk.back(); stk.pop_back();
                int x = stk.back(); stk.pop_back();
                int res = x / y;
                stk.push_back(res);
            }
            else if (s == "*") {
                int y = stk.back(); stk.pop_back();
                int x = stk.back(); stk.pop_back();
                int res = x * y;
                stk.push_back(res);
            }
            else {
                stk.push_back(stoi(s));
            }
        }
        return stk.back();

    }
};
