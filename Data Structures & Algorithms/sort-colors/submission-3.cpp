class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        array<int, 3> counts = {};

        for (int k : nums) {
            counts[k]++;
        }

        int index = 0;
        for (int i = 0; i < counts.size(); ++i) {
            int count = counts[i];
            for (int j = 0; j < count; ++j) {
                nums[index] = i;
                ++index;
            }
        }
    }
};