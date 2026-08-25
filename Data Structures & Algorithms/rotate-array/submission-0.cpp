class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        std::vector<int> copy = nums;
        int size = nums.size();
        for (int i = 0; i < nums.size(); ++i) {
            
            int newIndex = (i + k) % size;
            nums[newIndex] = copy[i];
        }
    }
};
