class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;
        
        std::unordered_map<char, int> stringOne;

        for (char c : s)
        {
            stringOne[c]++;
        }
        for (char c : t)
        {
            if (stringOne.find(c) != stringOne.end())
                stringOne[c]--;
        }

        // ['r': 2, 'a': 2, 'c': 2, 'e': 1]
        // c: 1, a: 1, r: 1, r: 0, a" 0, c: 


        for (const auto& [ch, num] : stringOne)
        {
            if (num != 0)
            {
                return false;
            }
        }
        return true;

    }
};
