class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int maxRet = *max_element(piles.begin(), piles.end());

        int l = 1;
        int r = maxRet;
        int res = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            int numHours = 0;
            for (int pile : piles) {
                numHours += (m + pile - 1) / m;
            }
            // if (numHours == h) return m;
            if (numHours <= h) {
                res = m;
                r = m - 1;
            }
            else {
                l = m + 1;
            }
            cout << endl;
        }
        return res;

    }
};
