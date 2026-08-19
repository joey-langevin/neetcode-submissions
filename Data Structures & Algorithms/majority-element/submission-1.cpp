class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> counts;

        for (int k : nums) {
            counts[k]++;
        }

        for (const auto& [key, count]: counts) {

            if (count > nums.size()/2) return key;
        }

        return -1;
    }
};