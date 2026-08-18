class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        std::vector<std::string> result;
        rec(result, 0, 0, "", n);
        return result;
    }

    void rec(vector<string>& result, int open, int closed, string cand, int max)
    {
        if (closed == max && open == closed)
        {
            result.push_back(cand);
            return;
        }
        if (open < max)
        {
            rec(result, open+1, closed, cand+"(", max);
        }
        if (closed < open)
        {
            rec(result, open, closed+1, cand+")", max);
        }
    }
    
};
