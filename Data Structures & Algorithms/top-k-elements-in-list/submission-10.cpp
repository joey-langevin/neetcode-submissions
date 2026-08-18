class Solution {
public:

    struct CompareSecond {
        bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        };
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> countMap;
        priority_queue<pair<int, int>, vector<pair<int, int>>, CompareSecond> minHeap;

        for (int k : nums) { // N
            ++countMap[k];
        }

        for (auto& [el, count] : countMap) { // N

            if (minHeap.size() < k) {
                minHeap.push({el, count}); // logN
            }
            else {
                auto top = minHeap.top();
                if (count > top.second) {
                    minHeap.pop(); // logN
                    minHeap.push({el, count}); // logN
                }
            }
        }

        vector<int> output;
        while (!minHeap.empty()) { // N
            output.push_back(minHeap.top().first); // logN
            minHeap.pop(); // logN
        }
        return output;




    }
};


// {1: 1, 2: 2, 3: 3}

// minHeap

// 1, 2, -> pop -> 2 -> 3 --> 2,3

// 