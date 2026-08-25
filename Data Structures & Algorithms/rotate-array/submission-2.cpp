class Solution {
public:

    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[end];
            nums[end] = nums[start];
            nums[start] = temp;
            ++start;
            --end;
        }
    }

    void rotate(vector<int>& nums, int k) {

        int realK = k % nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, realK - 1);
        reverse(nums, realK, nums.size() - 1);
        
    }
};


// 1, 2, 3 --> k = 2
// 3, 2, 1
