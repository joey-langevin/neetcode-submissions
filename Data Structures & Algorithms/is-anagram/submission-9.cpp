class Solution {
public:
    bool isAnagram(string s, string t) {
        

        std::unordered_map<char, int> mapOne;
        for (char c : s)
        {
            mapOne[c]++;
        }

        for (char c : t)
        {
            mapOne[c]--;
        }

        for (const auto& [key, value] : mapOne)
        {
            if (value != 0)
            {
                return false;
            }
        }
        return true;
    }
};
