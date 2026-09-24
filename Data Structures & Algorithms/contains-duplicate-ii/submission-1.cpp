class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_set<int> windowValues;
        for (int i = 0; i < n; ++i) {
            
            if (windowValues.contains(nums[i])) return true;
            windowValues.insert(nums[i]);
            
            if (i >= k) {
                windowValues.erase(nums[i - k]);
            }
        }
        return false;
    }
};