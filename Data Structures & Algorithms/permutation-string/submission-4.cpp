class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size(); 

        if (n1 > n2)
            return false;
        
        vector<int> s1Counts(26, 0);
        vector<int> s2Counts(26, 0);

        for (int i = 0; i < s1.size(); ++i) {
            s1Counts[int(s1[i]) - 'a']++;
            s2Counts[int(s2[i]) - 'a']++;
        }

        if (s1Counts == s2Counts) {
            return true;
        }

        for (int i = n1; i < n2; ++i) {
            ++s2Counts[int(s2[i]) - int('a')];
            --s2Counts[int(s2[i - n1]) - int('a')];
            if (s1Counts == s2Counts)
                return true;
        }
        
        return false;

    }
};
