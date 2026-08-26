class MyStack {
public:
    queue<int> q;
    int stkTop;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        stkTop = x;
    }

    // 6, 2, 3

    // i < 2

    // 2, 3, 6
    // 3, 6, 2

    // 3
    // 6, 2

    int pop() {
        int n = q.size();

        for (int i = 0; i < n-1; ++i) {
            int front = q.front(); q.pop();
            if (i == n-2) {
                stkTop = front;
            }
            q.push(front);
        }
        int front = q.front(); q.pop();
      
        return front;
    }
    
    int top() {
        return stkTop;
    }
    
    bool empty() {
        return q.empty();
    }
};




/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */