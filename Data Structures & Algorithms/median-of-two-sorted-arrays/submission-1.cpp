class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> medians;
        if (!nums1.empty())
        {
            if (nums1.size() % 2 == 1)
        {
            medians.push_back(nums1[nums1.size() / 2]);
        }
        else {
            medians.push_back(nums1[nums1.size() /2]);
            medians.push_back(nums1[nums1.size() /2 - 1]);
        }
        }
        if (!nums2.empty())
        {
            if (nums2.size() % 2 == 1){
            medians.push_back(nums2[nums2.size() / 2]);
            }
            else {
                medians.push_back(nums2[nums2.size() /2]);
                medians.push_back(nums2[nums2.size() /2 - 1]);
            }
        }
        
        
        sort(medians.begin(), medians.end());
        for (auto i : medians)
        {
            cout << i << endl;
        }
        double median = 0;
        if (medians.size() % 2 == 1)
        {
            median = medians[medians.size() / 2];
        }
        else {
            double sum = (medians[medians.size() / 2] + medians[medians.size() / 2 - 1]);
            median = sum / 2;
        }
        return median;
    }
};
