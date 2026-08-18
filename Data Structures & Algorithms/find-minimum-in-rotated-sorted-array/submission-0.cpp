class Solution {
public:
    int findMin(vector<int> &nums) {
        int smallest = nums[0];

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            cout << nums.at(mid) << endl;
            if (nums.at(mid) > nums.at(right)){
                left = mid + 1;
                smallest = min(smallest, nums.at(mid));
            }
            else {
                right = mid - 1;
                smallest = min(smallest, nums.at(mid));
            }
        }
        return smallest;
        
    }
};
