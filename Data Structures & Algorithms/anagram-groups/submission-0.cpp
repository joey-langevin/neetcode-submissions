class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::vector<vector<std::string>> ret;

        std::map<std::vector<int>, std::vector<std::string>> myMap;

        for (const auto& s: strs)
        {
            std::vector<int> count(26);

            for (const auto& letter : s)
            {
                count[letter - 'a']++;
            }
            myMap[count].emplace_back(s);
        }
        for (const auto& [key, val]: myMap)
        {
            ret.emplace_back(val);
        }
        return ret;

        
    }
};
