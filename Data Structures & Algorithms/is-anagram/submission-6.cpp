class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false;

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for (int i = 0; i < s.size(); ++i)
        {
            sMap[s.at(i)]++;
            tMap[t.at(i)]++;
        }
        if (sMap == tMap) return true;
        return false;
        
    }
};
