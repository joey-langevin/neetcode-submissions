class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            while (l < r && !std::isalnum(s.at(l))){
                l++;
            }
            while (l < r && !std::isalnum(s.at(r))){
                r--;
            }
            if (std::tolower(s.at(l)) != std::tolower(s.at(r))){
                return false;
            }
            l++;
            r--;
        }
        return true;
        
    }
};
