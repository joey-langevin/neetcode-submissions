class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int m = 0;
        while (l < r) {
            m = (l + r) / 2;
            if (nums[m] == target) return m;
            if (nums[m] < target) l = m + 1;
            else r = m - 1;
        }
        cout << "left: " << l << " mid: " << m << " right: " << r << endl;
        if (nums[l] == target) return l;
        else if (nums[l] < target) return l + 1;
        else return l;
    }
};