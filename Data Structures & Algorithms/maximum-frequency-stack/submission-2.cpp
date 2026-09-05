class FreqStack {
public:

    int maxCount;
    unordered_map<int, int> counts;
    unordered_map<int, stack<int>> stkMap;

    FreqStack() {
        maxCount = 0;
    }
    
    void push(int val) {
        ++counts[val];
        stkMap[counts[val]].push(val);
        maxCount = max(maxCount, counts[val]);
    }
    
    int pop() {
        int ret = stkMap[maxCount].top(); stkMap[maxCount].pop();
        if (stkMap[maxCount].empty()) {
            --maxCount;
        }
        --counts[ret];
        return ret;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */

// int maxCount
 // hashmap, [elemVal, count]

 // hasmap[counts, stk<int>] -> 

// 5, 7, 5, 7, 4, 5

// 5
// maxCount 0
// counts[{5, 1}] -> maxCount = max(maxCount, 1) -> 1
// stkMap -> [1] -> 5

// 7 : counts{{5, 1}, {7, 1}} -> maxCount = 1
// stkMap -> [1] -> [5, 7]

// maxCount = 1
// stkMap[1] . top(); pop();
// if (stkMap[1] is empty()) -> maxCount 












