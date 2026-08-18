class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> map;

        for (const auto& str : strs)
        {
            vector<int> count(26, 0);
            for (const auto& c : str)
            {
                count[c - 'a']++;
            }
            string key = "";
            for (int k : count)
            {
                key += to_string(k) + ",";
            }
            cout << key << '\n';
            map[key].emplace_back(str);
        }
        vector<vector<string>> result;

        for (const auto& [key, val] : map)
        {
            result.emplace_back(val);
        }
        return result;

    }
};
