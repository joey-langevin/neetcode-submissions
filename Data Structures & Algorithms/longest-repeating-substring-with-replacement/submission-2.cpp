class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<char, int> count;
        int maxSub = 0;
        int left = 0;

        for (int right = 0; right < s.size(); ++right) {

            count[s[right]]++;
            int maxCharCount = 0;
            for(auto [letter, cnt] : count) {
                maxCharCount = max(maxCharCount, cnt);
            }
            if ( (right - left + 1) - maxCharCount <= k) {
                maxSub = max(maxSub, (right - left + 1));
            }
            else {
                while (true) {
                    --count[s[left]];
                    ++left;
                    int maxCharCount = 0;
                    for(auto [letter, cnt] : count) {
                        maxCharCount = max(maxCharCount, cnt);
                    }
                    if ( (right - left + 1) - maxCharCount <= k) {
                        break;
                    }
                }
            }
        }
        return maxSub;
    }
};
