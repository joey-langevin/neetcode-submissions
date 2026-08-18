class Solution {
public:
    bool isValid(string s) {
        std::stack<int> stk;
        std::unordered_map<char, char> brackets{{')', '('}, {']', '['}, 
        {'}', '{'}};
        
        for (char c : s)
        {
            if (brackets.find(c) == brackets.end()){
                stk.push(c);
            }
            else{
                if (stk.empty()){
                    return false;
                }
                else if (stk.top() != brackets[c]){
                    return false;
                }
                else {
                    stk.pop();
                }
            }
        }
        if (stk.empty())
        {
            return true;
        }
        else {
            return false;
        }
        
        
    }
};
