class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int, int>> stk;
        int maxArea = 0;

        for (int i = 0; i < heights.size(); ++i) {

            int height = heights[i];
            int index = i;
            while (!stk.empty() && stk.top().second >= height) {
                pair<int, int> top = stk.top();
                stk.pop();
                maxArea = max(maxArea, (i - top.first) * top.second);
                index = top.first;
            }
            stk.push(make_pair(index, height));
        }
        int size = heights.size();
        while (!stk.empty()) {
            pair<int, int> top = stk.top();
            stk.pop();
            maxArea = max(maxArea, (size - top.first) * top.second);
        }
        return maxArea;
    }
};
