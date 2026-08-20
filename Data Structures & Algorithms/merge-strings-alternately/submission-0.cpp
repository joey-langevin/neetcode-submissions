class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int left = 0;
        int right = 0;
        string output = "";
        while (left < word1.size() && right < word2.size()) {
            
            output += word1[left];
            output += word2[right];
            ++left;
            ++right;
        }

        while (left < word1.size()) {
            output += word1[left];
            ++left;
        }
        while (right < word2.size()) {
            output += word2[right];
            ++right;
        }
        return output;
    }
};