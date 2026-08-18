class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxRate = 0;
        int minRate = 1;

        for (int n : piles)
        {
            maxRate = max(maxRate, n);
        }
        int res = maxRate;
        int mid;
        while (minRate <= maxRate)
        {
            mid = (minRate + maxRate) / 2;
            int hoursTaken = 0;
            for (int num : piles)
            {
                hoursTaken += (num + mid - 1) / mid;
            }
            if (hoursTaken < h){
                res = min(res, mid);
                maxRate = mid - 1;
            }
            else if (hoursTaken > h){
                minRate = mid + 1;
            }
            else {
                return mid;
            }
        }
        cout << "here";
        return res;

        
    }
};
