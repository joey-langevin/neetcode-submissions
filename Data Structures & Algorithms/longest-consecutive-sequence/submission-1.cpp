class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> prevNums(nums.begin(), nums.end());
        int longest = 0;
        for (int n : nums){
            if (prevNums.find(n-1) != prevNums.end()){
                continue;
            }
            int current = 1;
            while (prevNums.find(n+1) != prevNums.end()){
                current++;
                n++;
            }
            longest = std::max(current, longest);
        }
        return longest;
        
    }
};
