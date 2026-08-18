class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;

        std::array<int, 26> counts{};

        for (char c : s) {
            ++counts[c - 'a'];
        }

        for (char c: t) {
            --counts[c - 'a'];
        }

        for (int k : counts) {
            if (k != 0) return false;
        }

        return true;
    }
};
