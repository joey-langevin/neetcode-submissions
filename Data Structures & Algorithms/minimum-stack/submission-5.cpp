class MinStack {
public:
    stack<int> stk;
    stack<int> minStk;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);

        if (minStk.empty()) {
            minStk.push(val);
        }
        else if (val < minStk.top()) {
            minStk.push(val);
        }
        else {
            minStk.push(minStk.top());
        }
    }
    
    void pop() {
        stk.pop();
        minStk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};

// 6, 5, 4, 7, 3

// 6, 5, 4, 4, 3

// 6, 4, 4, 4
