class Solution {
public:
 unordered_map<char, vector<char>> letterMap = {
                {'2', {'a', 'b', 'c'}},
                {'3', {'d', 'e', 'f'}},
                {'4', {'g', 'h', 'i'}},
                {'5', {'j', 'k', 'l'}},
                {'6', {'m', 'n', 'o'}},
                {'7', {'p', 'q', 'r', 's'}},
                {'8', {'t', 'u', 'v'}},
                {'9', {'w', 'x', 'y', 'z'}}
            };
    vector<string> letterCombinations(string digits) {

            if (digits.empty()) return {};
           
            vector<string> result;
            string curr;
            backtrack(digits, 0, result, curr);
            return result;
    }
    void backtrack(string& digits, int i, vector<string>& result, string& cur)
    {
        if (cur.size() == digits.size()) {
            result.push_back(cur);
            return;
        }
        for (const auto& c : letterMap[digits[i]]) {
            cur.push_back(c);
            backtrack(digits, i + 1, result, cur);
            cur.pop_back();
        }

    }
};
