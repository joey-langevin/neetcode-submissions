class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int count = 1;
        
        int current = nums[0];

        for (int i = 1; i < nums.size(); ++i) {

            if (nums[i] == current) {
                ++count;
                if (count > nums.size()/2) return current;
            } else {
                current = nums[i];
                count = 1;
            }
        }
        return current;

    }
};