class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());

        vector<vector<int>> output;

        for (int i = 0; i < nums.size(); ++i) {

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < nums.size(); ++j) {

                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int left = j + 1;
                int right = nums.size() - 1;
                while (left < right) {

                    double sum =nums[i];
                    sum  +=  nums[j];
                    sum  += nums[left];
                    sum += nums[right];
                    if (sum < target) {
                        ++left;
                    }
                    else if (sum > target) {
                        --right;
                    }
                    else {
                        output.push_back({nums[i], nums[j], nums[left], nums[right]});
                        ++left;
                        while (left < right && nums[left] == nums[left - 1]) {
                            ++left;
                        }
                    }

                }
            }   
        }
        return output;
    }
};
// output: {2, 2, 2, 2};

// 2, 2, 2, 2, 2

// i
//    j
//       l
//             r

//1.000.000.000

