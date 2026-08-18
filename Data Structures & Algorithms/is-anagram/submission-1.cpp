class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> mapOne;
        std::unordered_map<char, int> mapTwo;
        if (s.size() != t.size())
        {
            return false;
        }
        for (int i = 0; i < s.size(); ++i)
        {
            ++mapOne[s.at(i)];
            ++mapTwo[t.at(i)];
        }     
        for (const auto& [key, val] : mapOne)
        {
            if (val != mapTwo[key])
            {
                return false;
            }
        }
        return true;
    }
};
