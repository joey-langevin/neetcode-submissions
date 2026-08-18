class Solution {
public:
    bool isPalindrome(string s) {
        
        int left = 0;
        int right = s.size() - 1;

        while (left <= right)
        {
            while (!isalnum(s.at(left)) && left < right) 
            {
                ++left;
            }
            while (!isalnum(s.at(right)) && right > left) 
            {
                --right;
            }
            // if (left == right) {
            //     return true;
            // }

            if (tolower(s.at(left)) != tolower(s.at(right))) {
                cout << "left: " << s.at(left) << " right: " << s.at(right) << endl;
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
