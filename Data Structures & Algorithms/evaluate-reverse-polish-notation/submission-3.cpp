class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        // 4, 13, 5, /, +

        // stk: 4
        // stk: 4, 13
        // stk: 4, 13, 5
        // right: 5, left =13 --> 13/5 = 2
        // stk: 4, 2

        stack<int> stk;
        for (string s : tokens)
        {
            if (s == "+")
            {
                int right = stk.top(); stk.pop();
                int left = stk.top(); stk.pop();
                int result = right + left;
                stk.push(result);
            }
            else if (s == "-")
            {
                int right = stk.top(); stk.pop();
                int left = stk.top(); stk.pop();
                int result = left - right;
                stk.push(result);
            }
            else if (s == "*")
            {
                int right = stk.top(); stk.pop();
                int left = stk.top(); stk.pop();
                int result = left * right;
                stk.push(result);
            }
            else if (s == "/")
            {
                int right = stk.top(); stk.pop();
                int left = stk.top(); stk.pop();
                int result = left / right;
                stk.push(result);
            }
            else
            {
                stk.push(stoi(s));
            }
        }
        return stk.top();
    }
};
