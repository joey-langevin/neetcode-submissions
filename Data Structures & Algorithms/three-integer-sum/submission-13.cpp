class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // [0, 0, 0, 0]
        //  i     

        
        std::sort(nums.begin(), nums.end());

        vector<vector<int>> output;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i != 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right)
            {
                if (left > i + 1 && nums.at(left) == nums.at(left -1) )
                {
                    ++left;
                    continue;
                }
                if (right != nums.size() - 1 && nums.at(right) == nums.at(right+1))
                {
                    --right;
                    continue;
                }
                int curr = nums.at(i) + nums.at(left) + nums.at(right);
                if (curr == 0)
                {
                    output.push_back({nums.at(i), nums.at(left), nums.at(right)});
                    ++left;
                }
                else if (curr > 0)
                {
                    --right;
                }
                else if (curr < 0)
                {
                    ++left;
                }

            }
        }
        return output;
        
    }
};
