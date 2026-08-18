class Solution {
public:

    string encode(vector<string>& strs) {
        std::string ret = "";
        for (auto str : strs)
        {
            ret += std::to_string(str.size()) + "#" + str;
        }
        return ret;

    }

    vector<string> decode(string s) {
        std::vector<std::string> ret;
        int i = 0;
        while (i < s.size())
        {
            int j = i;
            while (s.at(j) != '#'){
                j++;
            }
            int len = std::stoi(s.substr(i, j-i));
            ret.emplace_back(s.substr(j + 1, len));
            i = j + len + 1;
        }
        return ret;
    }
};
