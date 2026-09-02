class Solution {
public:
    string decodeString(string s) {
        
        stack<char> stk;

        int len = s.size();
        for (int i = 0; i < len; ++i) {
            if (s[i] != ']') {
                stk.push(s[i]);
            }
            else 
            {
                string toCopy = "";
                while (stk.top() != '[') {
                    toCopy = stk.top() + toCopy; 
                    stk.pop();
                }
                cout << "tocopy: " << toCopy << endl;
                stk.pop();
                string strNum = "";
                while (!stk.empty() && isdigit(stk.top())) {
                    strNum = string(1, stk.top()) + strNum;
                    stk.pop();
                }
                int dup = stoi(strNum);
                cout << "dup: " << dup << endl;
                string dupped = "";
                for (int i = 0; i < dup; ++i) {
                    dupped += toCopy;
                }
                cout << "dupped: " << dupped << endl;
                for (int j = 0; j < dupped.size(); ++j) {
                    stk.push(dupped[j]);
                }
            }
        }
        string result = "";
        while (!stk.empty()) {
            result = string(1, stk.top()) + result;
            stk.pop();
        }
        return result;
    }
};