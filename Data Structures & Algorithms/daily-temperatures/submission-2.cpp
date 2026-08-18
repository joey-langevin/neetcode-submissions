class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> result(temperatures.size());

        stack<pair<int, int>> stk;// first : temp, second; index

        for (int i = 0; i < temperatures.size(); ++i)
        {
            if (stk.empty() || temperatures.at(i) <= stk.top().first)
            {
                stk.push({temperatures.at(i), i});
            }
            else
            {
                while (!stk.empty() && temperatures.at(i) > stk.top().first)
                {
                    auto top = stk.top(); stk.pop();
                    result.at(top.second) = i - top.second;
                }
                stk.push({temperatures.at(i), i});
            }
        }
        return result;
    }
};
