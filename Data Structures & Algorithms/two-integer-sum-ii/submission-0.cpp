class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right){
            if (numbers.at(left) + numbers.at(right) > target){
                right--;
            }
            else if (numbers.at(left) + numbers.at(right) < target){
                left++;
            }
            else{
                return {left + 1, right + 1};
            }
        }
        return {};

        
    }
};
