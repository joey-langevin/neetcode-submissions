class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxSub = 0;
        int current = 0;
        set<char> subSet;
        while (right < s.size())
        {
            if (subSet.find(s.at(right)) == subSet.end()){
                subSet.insert(s.at(right));
                ++current;
                maxSub = max(maxSub, current);
            }
            else{
                while (s.at(left) != s.at(right)){
                    subSet.erase(s.at(left));
                    --current;
                    ++left;
                }
                ++left;
            }
            ++right;
        }
        return maxSub;
    }
};
