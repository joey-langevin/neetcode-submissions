class MyQueue {
public:
    stack<int> stk;
    MyQueue() {
        
    }
    
    void push(int x) {
        stk.push(x);
    }

    int pop() {
        stack<int> stk2;

        while (!stk.empty()) {
            int top = stk.top(); stk.pop();
            stk2.push(top);
        }
        int ret = stk2.top(); stk2.pop();
        while (!stk2.empty()) {
            int top = stk2.top(); stk2.pop();
            stk.push(top);
        }
        return ret;

    }
    
    int peek() {
        stack<int> stk2;

        while (!stk.empty()) {
            int top = stk.top(); stk.pop();
            stk2.push(top);
        }
        int ret = stk2.top();
        while (!stk2.empty()) {
            int top = stk2.top(); stk2.pop();
            stk.push(top);
        }
        return ret;
    }
    
    bool empty() {
        return stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */