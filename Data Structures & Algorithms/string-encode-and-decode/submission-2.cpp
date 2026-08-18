class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (const auto& str : strs)
        {
            result += to_string(str.size()) + "#" + str;
        }
        return result;

    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;
        while (i < s.size())
        {
            int j = i;
            while (s.at(j) != '#')
            {
                ++j;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            string word = s.substr(i, length);
            result.emplace_back(word);
            i += length;
        }
        return result;

    }
};
