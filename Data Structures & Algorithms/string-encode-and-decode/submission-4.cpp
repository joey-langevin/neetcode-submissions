class Solution {
public:

    string encode(vector<string>& strs) {
        string output = "";

        for (const string& s : strs) {
            int len = s.size();
            output += to_string(len) + "#" + s;
        }
        return output;
    }

    vector<string> decode(string s) {
        vector<string> output;

        // 5#World3#Wow
        // _______
        // strLen = 5

        // index = 2; 2 < 7; 
        int i = 0;
        while (i < s.size()) {
            std::string strLen = "";
            std::string currentWord = "";
            while (s.at(i) != '#') {
                strLen += s.at(i);
                ++i;
            }
            ++i;
            int len = stoi(strLen);
            for (int index = i; index < i + len; ++index) {
                currentWord += s.at(index);
            }
            i += len;
            output.push_back(currentWord);
        }
        return output;
    }
};


// [Hello, World]
// [5]

// 5#Hello5#World

// [Hello, 5#, World]

// 5#Hello2#5#


// [Hello, "", 5#]

// 5#Hello0#2#5#

// 5#
//Hello, 0#,
// "", 2#
// 5#, 
// [Hello, "", 5#]