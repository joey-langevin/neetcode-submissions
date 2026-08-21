class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> counts;

        for (int k : nums) {
            ++counts[k];
        }

        vector<int> output;
        for (const auto& [key, count] : counts) {
            if (count > nums.size() / 3) {
                output.push_back(key);
            }
        }
        return output;
    }
};