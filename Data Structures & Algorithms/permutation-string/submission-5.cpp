class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char, int> cnt;
        int len = s1.size();

        for (char c : s1) {
            cnt[c]++;
        }

        for (int i = 0; i < s2.size(); ++i) {
            auto cpy = cnt;
            for (int j = i; j < s2.size(); ++j) {
                if (--cpy[s2[j]] < 0) {
                    break;
                }
                if (j - i + 1 == len) {
                    return true;
                }
            }
        }
        return false;
        

        
    }
};
