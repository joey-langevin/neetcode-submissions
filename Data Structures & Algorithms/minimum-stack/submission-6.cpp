class MinStack {
public:
    stack<pair<int, int>> stk;
    MinStack() {
        
    }
    
    void push(int val) {
        
        int min = std::min(stk.empty() ? val : stk.top().second, val);
        stk.push({val, min});

    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top().first;
    }
    
    int getMin() {
        return stk.top().second;
    }
};
