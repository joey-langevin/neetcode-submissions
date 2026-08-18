class Solution {
public:
    int maxArea(vector<int>& heights) {

        int maxWater = 0;

        int left = 0;
        int right = heights.size() - 1;

        while (left < right){
            int height = std::min(heights.at(left), heights.at(right));
            int currArea = (right - left) * height;
            maxWater = std::max(maxWater, currArea);
            if (heights.at(left) <= heights.at(right)){
                left++;
            }
            else{
                right--;
            }
        }
        return maxWater;
        
    }
};
