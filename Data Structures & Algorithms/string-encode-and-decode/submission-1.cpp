class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (const auto& str : strs)
        {
            result += to_string(str.size()) + "#" + str;
        }
        cout << result;
        return result;

    }

    vector<string> decode(string s) {
        vector<string> result;

        int currentIndex = 0;
        while (currentIndex < s.size())
        {
            string stringLen = "";
            while (s.at(currentIndex) != '#') 
            {
                stringLen += s.at(currentIndex);
                ++currentIndex;
            }
            ++currentIndex;
            string word = "";
            for (int i = currentIndex; i < stoi(stringLen) + currentIndex; ++i)
            {
                word += s.at(i);
            }
            result.emplace_back(word);
            currentIndex += stoi(stringLen);
        }   
        return result;

    }
};
