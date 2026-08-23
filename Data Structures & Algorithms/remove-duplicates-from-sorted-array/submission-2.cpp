class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int left = 1;
        int len = nums.size();

        for (int right = 1; right < len; ++right) {

            if (nums[right - 1] != nums[right]) {
                nums[left] = nums[right];
                ++left;
            }
        }
        return left;
    }
};

