class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::unordered_map<int, int> seen;

        for (int index = 0; index < nums.size(); ++index) {

            int lookingFor = target - nums[index];

            if (seen.contains(lookingFor)) {
                return {seen[lookingFor], index};
            }

            seen.emplace(nums[index], index);
            
        }
        return {-1, -1};

    }
};

// 3,4,5,6 target = 7

// map{{3,0}}

// 3 -> 7 -3 = 4

// 4 -> 7 - = 3
// {0, 1};
