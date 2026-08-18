class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;

        vector<string> part;
        backtrack(s, result, part, 0);
        return result;
    }

    void backtrack(string& s, vector<vector<string>>& result, vector<string>& part, int index)
    {
        if (index == s.size()) {
            result.push_back(part);
            return;
        }
        for (int j = index; j < s.size(); ++j)
        {
            if (IsPal(s, index, j)) {
                part.push_back(s.substr(index, j - index + 1));
                backtrack(s, result, part, j + 1);
                part.pop_back();
            }
        }
    }

    bool IsPal(string& string, int l, int r)
    {
        while (l < r)
        {
            if (string[l++] != string[r--]) return false;
        }
        return true;
    }
};
