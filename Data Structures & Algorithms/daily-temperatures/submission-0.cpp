class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ret(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); ++i)
        {
            for (int j = i + 1; j < temperatures.size(); ++j)
            {
                if (temperatures.at(j) > temperatures.at(i))
                {
                    ret.at(i) = j - i;
                    break;
                }
            }
        }
        return ret;
    }
};
