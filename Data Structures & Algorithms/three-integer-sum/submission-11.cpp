class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> output;

        set<vector<int>> seen;

        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                for (int k = j + 1; k < nums.size(); ++k)
                {
                    int curr = nums.at(i) + nums.at(j) + nums.at(k);
                
                    if (curr == 0)
                    {
                        vector<int> candidate{nums.at(i), nums.at(j), nums.at(k)};
                        std::sort(candidate.begin(), candidate.end());
                        if (seen.find(candidate) == seen.end())
                        {
                            seen.insert(candidate);
                            output.push_back(candidate);
                        }
                    }
                }
            }
        }
        return output;
    }
};
