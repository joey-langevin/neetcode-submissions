class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        std::unordered_set<int> seen;

        for (int k : nums) {

            if (seen.contains(k)) return true;

            seen.insert(k);
        }

        return false;


    }
};


// 1,2,3,4

// {1, 2, 3, 4}

// 1,2,3,3

// {1, 2, 3, }