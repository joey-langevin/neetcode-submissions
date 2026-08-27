class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<pair<int, int>> stk;
        int size = temperatures.size();
        vector<int> output(size, 0);

        for (int i = size - 1; i >= 0; --i) {
            while (!stk.empty() && temperatures[i] >= stk.top().first) {
                stk.pop();
            }
            if (stk.empty()) {
                output.at(i) = 0;
            }
            else {
                output.at(i) = stk.top().second - i;
            }
            stk.push({temperatures.at(i), i});
        }
        return output;
    }
};

// 00,00,00,00,000,00

// 47,47,46,76,100,70

// (70, 0)





