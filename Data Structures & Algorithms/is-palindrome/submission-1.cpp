class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0; 
        int right = s.size() - 1;

        while (left < right)
        {
            while (left < right && !alphaNum(s.at(left))) {
                ++left;
            }
            while (left < right && !alphaNum(s.at(right) )) {
                --right;
            }
            if (tolower(s.at(left)) != tolower(s.at(right))) {
                return false;
            }
            ++left; --right;
        }
        return true;
    }
    
    bool alphaNum(char c)
    {
        if (c >= 'A' && c <= 'Z' ||
            c >= 'a' && c <= 'z' ||
            c >= '0' && c <= '9'
        ) { 
            return true;
        }
        return false;
    }
};
