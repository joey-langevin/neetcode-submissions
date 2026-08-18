class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> res(temperatures.size());

        stack<pair<int, int>> stk; // (temp, index);

        for (int i = 0; i < temperatures.size(); ++i)
        {
            int temp = temperatures.at(i);
            while (!stk.empty() && temp > stk.top().first)
            {
                auto top = stk.top();
                stk.pop();
                res.at(top.second) = i - top.second;
            }
            stk.push(make_pair(temp, i));
        }
        return res;
        
    }
};
