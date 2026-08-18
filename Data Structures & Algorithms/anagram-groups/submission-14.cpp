class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> output;

        unordered_map<string, vector<string>> hMap;

        for (const auto& str : strs) { // N

            std::vector<int> count(26, 0);
            for (const auto c : str) { // M 
                
                int index = c - 'a';
                ++count[index];
            }

            std::string key;
            for (int k : count) { // 26 -> 1
                key += to_string(k) + "@";
            }

            hMap[key].push_back(str);
        }

        for (const auto& [key, value] : hMap) { // N 
            output.push_back(value);
        }

        // N*M + N
        // 2N - 

        return output;

    }
};
