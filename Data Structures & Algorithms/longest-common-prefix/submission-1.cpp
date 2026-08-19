class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int strIndex = 0;
        string prefix = "";
        
        while (true) {
            char toMatch;
            for (int i = 0; i < strs.size(); ++i) {
                if (strIndex >= strs.at(i).size()) return prefix;

                if (i == 0) toMatch = strs.at(i).at(strIndex);

                if (strs.at(i).at(strIndex) != toMatch) {
                    return prefix;
                }
            }
            strIndex++;
            prefix += toMatch;
        }
        return prefix;
        
    }
};

// ["bat","bag","bank","band"]

// strIndex = 0;
// prefix: ""


// "b" --> b, b, b, b --> count = 1; strIndex = 1
// "a" --> a, a, a, a, --> count = 2, strIndex = 2;
// "t" --> t, break;

// prefix = ba