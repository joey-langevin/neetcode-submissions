class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;

        int left = 0, right = heights.size() - 1;

        while (left < right) {
            int width = right - left;
            int height = min(heights[left], heights[right]);
            maxArea = max(maxArea, width * height);

            if (heights[left] <= heights[right]) {
                ++left;
            }
            else {
                --right;
            }
        }
        return maxArea;
    }
};
