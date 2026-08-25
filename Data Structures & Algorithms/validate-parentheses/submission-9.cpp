class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<char, char> hMap {
            {']', '['}, 
            {'}', '{'},  
            {')', '('}
            };
        
        vector<char> stk;

        for (char c : s) {
            if (!hMap.contains(c)) {
                stk.push_back(c);
            }
            else if (stk.empty()) {
                return false;
            }
            else {
                char top = stk.back();
                if (top != hMap[c]) {
                    return false;
                }
                stk.pop_back();
            }
        }
        if (stk.empty()) {
            return true;
        }
        return false;
    

    }
};


// {(