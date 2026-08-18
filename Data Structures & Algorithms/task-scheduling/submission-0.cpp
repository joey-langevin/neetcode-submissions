class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        priority_queue<int> maxHeap;
        vector<int> countArray(26, 0);

        for (const auto& c : tasks) {
            countArray[c - 'A']++;
        }
        for (auto val : countArray) {
            if (val > 0)
            {
                maxHeap.push(val); 
            }
            
        }
        int time = 0;
        while (!maxHeap.empty())
        {
            vector<int> temp;
            int tasksProcessed = 0;

            for (int i = 0; i <= n; ++i)
            {
                if (!maxHeap.empty()){
                    temp.push_back(maxHeap.top() - 1);
                    ++tasksProcessed;
                    maxHeap.pop();
                }
            }

            for (const auto& t : temp) {
                if (t > 0) {
                    maxHeap.push(t);
                }
                
            }
            time += maxHeap.empty() ? tasksProcessed : n + 1;
        }
        return time;
        
    }
};
