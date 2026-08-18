class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        std::vector<std::vector<int>> output;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i){

            if (i > 0 && nums.at(i) == nums.at(i-1)){
                continue;
            }
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r){
                int sum = nums.at(i) + nums.at(l) + nums.at(r);
                if (sum > 0){
                    --r;
                }
                else if (sum < 0){
                    ++l;
                }
                else{
                    output.push_back({nums.at(i), nums.at(l), nums.at(r)});
                    l++;
                    while (l < r && nums.at(l) == nums.at(l-1)){
                        l++;
                    }
                }
            }
        }
        return output;


        
    }
};
