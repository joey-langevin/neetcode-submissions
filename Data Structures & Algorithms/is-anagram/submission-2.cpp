class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> sCharMap;

        if (s.size() != t.size())
        {
            return false;
        }
        for (const auto& c : s)
        {
            ++sCharMap[c];
        }
        for (const auto& c : t)
        {
            if (sCharMap.find(c) == sCharMap.end() || sCharMap[c] == 0)
            {
                return false;
            }
            --sCharMap[c];
        }
        return true;

    }
};
