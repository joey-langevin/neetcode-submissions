class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        vector<int> frequency(26, 0);
        int result = 0;

        for (int right = 0; right < s.size(); ++right) {

            ++frequency[s[right] - 'A'];

            int currentWindow = right - left + 1;
            int maxChar = *max_element(frequency.begin(), frequency.end());

            while ( (right - left + 1) - maxChar > k) {
                --frequency[s[left] - 'A'];
                ++left;
            }
            result = max(result, (right - left + 1));
        }
        return result;
        
    }
};
