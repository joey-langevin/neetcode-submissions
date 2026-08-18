class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        auto comp = [](const vector<int>& a, const vector<int>& b) {
            int d1 = a[0] * a[0] + a[1] * a[1];
            int d2 = b[0] * b[0] + b[1] * b[1];
            return d1 > d2; // true means 'a' comes after 'b' in the heap (min-heap)
        };
        priority_queue<vector<int>, vector<vector<int>>, decltype(comp)> minHeap(points.begin(), points.end(), comp);

        vector<vector<int>> res;
        for (int i = 0; i < k; ++i) {
            res.emplace_back(minHeap.top());
            minHeap.pop();
        }
        return res;
    }
};
