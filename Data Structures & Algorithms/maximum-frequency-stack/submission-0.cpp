class FreqStack {
public:

    stack<int> stk;
    unordered_map<int, int> counts;

    FreqStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        ++counts[val];    
    }
    
    int pop() {
        int maxCount = 0;
        for (const auto& [key, count] : counts) {
            maxCount = max(maxCount, count);
        }
        int retVal = -1;
        stack<int> temp;
        while (!stk.empty()) {
            int top = stk.top(); stk.pop();
            if (counts[top] == maxCount) {
                retVal = top;
                --counts[top];
                break;
            }
            temp.push(top);
        }
        while (!temp.empty()) {
            stk.push(temp.top()); temp.pop();
        }
        return retVal;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */