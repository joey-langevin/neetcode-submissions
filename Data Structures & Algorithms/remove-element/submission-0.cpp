class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int left = 0;
        int count = 0;
        for (int right = 0; right < nums.size(); ++right) {

            if (nums.at(right) != val) {
                nums.at(left) = nums.at(right);
                ++left;
                ++count;
            } else {
                // ++count;
            }
        }
        return count;
        
    }
};
     