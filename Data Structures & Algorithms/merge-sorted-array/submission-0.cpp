class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        if (m > 0) {
            temp.insert(temp.end(), nums1.begin(), nums1.begin() + m);
        }
        int i = 0;
        int j = 0;
        int k = 0;

        while (i < m && j < n) {
            if (temp[i] <= nums2[j]) {
                nums1[k] = temp[i++];
            }
            else {
                nums1[k] = nums2[j++];
            }
            ++k;
        }
        while (i < m) {
            nums1[k] = temp[i++];
            ++k;
        }
        while (j < n) {
            nums1[k] = nums2[j++];
            ++k;
        }

    }
};