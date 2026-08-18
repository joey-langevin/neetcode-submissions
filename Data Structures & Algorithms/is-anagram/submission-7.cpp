class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> count(26, 0);

        if (s.size() != t.size()) return false;

        for (int i = 0; i < s.size(); ++i)
        {
            count.at(s.at(i) - 'a')++;
            count.at(t.at(i) - 'a')--;
        }
        for (int k : count)
        {
            if (k != 0) return false;
        }
        return true;
    }
};
