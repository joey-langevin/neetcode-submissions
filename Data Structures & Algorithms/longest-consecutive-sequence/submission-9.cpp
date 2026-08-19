class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> seen;

        for (int k : nums) {
            seen.insert(k);
        }

        int largest = 0;
        for (int num : nums) {
            if (seen.contains(num - 1)) continue;
            int count = 1;
            int current = num;
            while (seen.contains(current + 1)) {
                ++count;
                current += 1;
            }
            largest = max(largest, count);
        }
        return largest;
    }
};
