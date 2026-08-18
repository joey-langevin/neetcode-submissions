class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy = strs;
        std::unordered_map<string, std::vector<int>> map;
        for (auto& s : copy)
        {
            sort(s.begin(), s.end());
        }

        for (int i = 0; i < copy.size(); ++i)
        {
            map[copy.at(i)].emplace_back(i);
        }
        vector<vector<string>> result;

        for (const auto& [key, indices] : map)
        {
            vector<string> anagrams;
            for (int index : indices)
            {
                anagrams.emplace_back(strs.at(index));
            }
            result.emplace_back(anagrams);
        }
        return result;
    }
};
