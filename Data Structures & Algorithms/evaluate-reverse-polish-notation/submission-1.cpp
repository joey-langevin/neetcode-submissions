class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stk;
        int secondTop = 0;
        int top = 0;

        for (const string& str : tokens)
        {
            if (str == "+"){
                top = stk.top(); stk.pop();
                secondTop = stk.top(); stk.pop();
                stk.push(top + secondTop);
            }
            else if (str == "-"){
                top = stk.top(); stk.pop();
                secondTop = stk.top(); stk.pop();
                stk.push(secondTop - top);
            }
            else if (str == "/"){
                top = stk.top(); stk.pop();
                secondTop = stk.top(); stk.pop();
                stk.push(secondTop / top);
            }
            else if (str == "*"){
                top = stk.top(); stk.pop();
                secondTop = stk.top(); stk.pop();
                stk.push(secondTop * top);
            }
            else{
                stk.push(std::stoi(str));
            }
        }
        return stk.top();
        
        
    }
};
