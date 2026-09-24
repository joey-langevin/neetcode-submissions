class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        std::array<bool, 256> inWindow{};
        const int len = static_cast<int>(s.size());
        int best = 0;

        for (int left = 0, right = 0; right < len; ++right) {
            const auto c = static_cast<unsigned char>(s[right]);
            while (inWindow[c]) {
                inWindow[static_cast<unsigned char>(s[left])] = false;
                ++left;
            }
            inWindow[c] = true;
            best = max(best, right - left + 1);
        }
        return best;
    }
};
