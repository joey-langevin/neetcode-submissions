class MinStack {
public:

    vector<int> stk;
    vector<int> minStk;

    MinStack() {
        
    }
    
    void push(int val) {
        stk.push_back(val);
        int minVal = minStk.empty() || val < minStk.back() ? val : minStk.back();
        minStk.push_back(minVal);
    }
    
    void pop() {
        stk.pop_back();
        minStk.pop_back();
    }
    
    int top() {
        return stk.back();
    }
    
    int getMin() {
        return minStk.back();
    }
};
