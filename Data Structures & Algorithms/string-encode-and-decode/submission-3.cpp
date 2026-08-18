class Solution {
public:

    string encode(vector<string>& strs) {
        string delim = "#";
        string result = "";
        for (string s : strs)
        {
            int length = s.size();
            string encoded = to_string(length) + delim + s;
            result += encoded;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int index = 0;
        while (index < s.size())
        {
            string lengthOfWord = "";
            while (s.at(index) != '#')
            {
                lengthOfWord += s.at(index);
                ++index;
            }
            ++index;
            int size = stoi(lengthOfWord);

            result.emplace_back(s.substr(index, size));
            index += size; 
        }
        return result;

        // length = 4
        // index 1
        // size = 4

        // result: ["neet", "code"]
        // index = 6

        //"4#neet. 4# code4#loves3#you"
        // size 4, index = 8
    }
};
