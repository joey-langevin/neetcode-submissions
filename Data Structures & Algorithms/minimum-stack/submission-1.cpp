class MinStack {
public:
    std::vector<int> stk;
    std::vector<int> minStk;

    MinStack() {
    }
    
    void push(int val) {

        stk.emplace_back(val);
        if (minStk.empty())
        {
            minStk.push_back(val);
        }
        else{
            minStk.push_back(std::min(val, minStk.back()));
        }
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
