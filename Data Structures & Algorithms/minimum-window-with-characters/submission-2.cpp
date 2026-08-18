class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";
        unordered_map<char, int> map;
        for (const auto& c : t) {
            map[c]++;
        }

        int minWindow = INT_MAX;
        pair<int, int> indices;
        int left = 0;
        int count = 0;
        for (int right = 0; right < s.size(); ++right) {
            if (map.find(s[right]) != map.end()) {
                --map[s[right]];
                if (map[s[right]] == 0) {
                    ++count;
                }
            }
            while (count == map.size()) {
                if (right - left + 1 < minWindow) {
                    minWindow = right - left + 1;
                    indices = make_pair(left, right);
                }
                if (map.find(s[left]) != map.end()) {
                    ++map[s[left]];
                    if (map[s[left]] > 0) {
                        --count;
                    }
                }
                ++left;

            }
            
        }
        if (minWindow == INT_MAX) return "";

        return s.substr(indices.first, indices.second - indices.first + 1);
    }
};
