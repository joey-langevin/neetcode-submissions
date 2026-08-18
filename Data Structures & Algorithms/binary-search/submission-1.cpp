class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() - 1;

        // -1, 0, 2, 4, 6, 8
        //  l     m          r
        //           l  m   r
        //           r,l
                     //m

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (nums.at(mid) == target) return mid;
            else if (nums.at(mid) > target) 
            {
                right = mid - 1;
            }
            else 
            {
                left = mid + 1;
            }
        }

        return -1;
    }
};
