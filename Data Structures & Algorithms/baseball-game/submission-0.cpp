class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        vector<int> stk;
        
        for (string& op : operations) {
            if (op == "+") {
                int top = stk.back(); stk.pop_back();
                int newTop = top + stk.back();
                stk.push_back(top);
                stk.push_back(newTop);
            }
            else if (op == "D") {
                stk.push_back(stk.back() * 2);
            }
            else if (op == "C") {
                stk.pop_back();
            }
            else {
                stk.push_back(stoi(op));
            }
        }
        int total = 0;
        for (int num : stk) {
            total += num;
        }
        return total;
    }
};