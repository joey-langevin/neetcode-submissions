class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;

        for (int stone : stones) {
            maxHeap.push(stone);
        }

        while (maxHeap.size() > 1) {
            int rock1 = maxHeap.top();
            maxHeap.pop();
            int rock2 = maxHeap.top();
            maxHeap.pop();

            int diff = abs(rock1 - rock2);
            if (diff > 0) {
                maxHeap.push(diff);
            }
        }
        return maxHeap.size() == 0 ? 0 : maxHeap.top();
    }
};
