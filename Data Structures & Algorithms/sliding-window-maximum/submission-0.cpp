class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> deq;
        vector<int> result;
        int left = 0;
        for (int right = 0; right < nums.size(); ++right) {

            while (!deq.empty() && nums[deq.back()] < nums[right]) {
                deq.pop_back();
            }
            deq.push_back(right);

            if (left > deq.front()) {
                deq.pop_front();
            }

            if (right + 1 >= k) {
                result.push_back(nums[deq.front()]);
                left++;
            }
        }
        return result;
    }
};
