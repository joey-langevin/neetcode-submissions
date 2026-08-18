class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int maxArea = 0;
        int left = 0; 
        int right = heights.size() - 1;

        while (left < right)
        {
            int width = right - left;
            int minHeight = min(heights.at(left), heights.at(right));
            int area = width * minHeight;
            maxArea = max(maxArea, area);

            if (heights.at(left) < heights.at(right))
            {
                ++left;
            }
            else 
            {
                --right;
            }
        }
        return maxArea;
    }
};
