class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);

        int n = temperatures.size();

        vector<pair<int, int>> stk;

        for (int i = n - 1; i >=0; --i) {

            while (!stk.empty() && stk.back().first <= temperatures[i]) {
                stk.pop_back();
            }

            if (stk.empty()) {
                result.at(i) = 0;
            } else {
                result.at(i) = stk.back().second - i;
            }
            stk.push_back({temperatures[i], i});


        }
        return result;
    }
};



// 


// 30, 35, 40, 28

//              i

// [28, i]

// [40, i] --> 
// [{40, i}, {35, j}]


