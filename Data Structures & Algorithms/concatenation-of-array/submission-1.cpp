class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> output;
        for (int i = 0; i < nums.size() * 2; ++i)
        {
            output.push_back(nums[i % nums.size()]);
        }
       return output;


       // 1, 2, 3, 4
       // 
    }
};