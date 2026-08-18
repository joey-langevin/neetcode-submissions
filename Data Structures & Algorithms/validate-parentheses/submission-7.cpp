class Solution {
public:
    bool isValid(string s) {
        
        // while open brack push to stack
        // if char is closing
        // check top of stack for match
        // if non-match return false
        // if match pop froms stack

        // when end of input is reached

        // if stack is empty return true
        // if non empty return false;

        std::unordered_map<char, char> brackets{ {')', '('}, {']', '['}, {'}', '{'}};
        deque<char> stk;

        for (char c : s)
        {
            if (brackets.find(c) != brackets.end()) // clsoing bracket
            {
                if (stk.empty() || stk.front() != brackets[c])
                {
                    return false;
                }
                else
                {
                    stk.pop_front();
                }
            }
            else
            {
                stk.push_front(c);
            }
        }
        if (!stk.empty())
        {
            return false;
        }
        return true;
    }
};
