class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, std::vector<string>> map;

        for (const auto& str : strs)
        {
            vector<int> key(26, 0);
            for (char c : str) {
                ++key.at(-1 * ('a' - tolower(c)));
            }
            std::string hashKey = "";
            for (int k : key) {
                std::cout << k << ",";
                hashKey += to_string(k) + ",";
            }
            std::cout << endl;
            std::cout << hashKey << endl;
            map[hashKey].emplace_back(str);
        }
        vector<vector<string>> result;
        for (const auto& pair : map)
        {
            result.emplace_back(pair.second);
        }
        return result;
    }
};
