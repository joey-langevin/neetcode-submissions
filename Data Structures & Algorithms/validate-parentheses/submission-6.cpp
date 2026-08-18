class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> map = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        std::stack<char> stk;

        for (char c : s) {
            if (stk.empty() && map.find(c) != map.end()) return false;
            else if (map.find(c) == map.end()) {
                stk.push(c);
            }
            else if (stk.top() != map[c]) {
                return false;
            }
            else{
                stk.pop();
            }
        }
        return stk.empty();
    }
};
