class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int size = heights.size();
        int left = 0;
        int right = size - 1;
        int maxArea = 0;

        while (left < right) {
            int width = right - left;
            int height = min(heights[left], heights[right]);
            maxArea = max(maxArea, height * width);

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
