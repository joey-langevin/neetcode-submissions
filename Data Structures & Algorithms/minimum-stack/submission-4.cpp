class MinStack {
public:

    stack<int> stk;
    stack<int> minStk;
    int minValue = 0;

    MinStack() {
        
    }
    
    void push(int val) {
        
        if (stk.empty())
        {
            minValue = val;
        }
        if (val < minValue)
        {
            minValue = val;
        }

        stk.push(val);
        minStk.push(minValue);

    }
    
    void pop() {
        
        stk.pop();
        minStk.pop();

        if (!minStk.empty() && minStk.top() != minValue)
        {
            minValue = minStk.top();
        }
    }
    
    int top() {
        
        return stk.top();
    }
    
    int getMin() {
        
        return minStk.top();
    }

    // push 1 --> push 2 --> push 0 --> getMin() --> pop() --> get Min


    // -            -           -           0           -       1

    // min = 1
    // 1    -->>    1. -->   0   -->    -       --> pop 0 ---> 1


};
