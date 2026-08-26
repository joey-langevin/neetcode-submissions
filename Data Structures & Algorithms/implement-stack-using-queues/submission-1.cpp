class MyStack {
public:
    
    queue<int> first;
    queue<int> second;

    MyStack() {
        
    }
    
    void push(int x) {
        first.push(x);

        if (!second.empty()) {
            second.pop();
        }
        second.push(x);

    }
    
    int pop() {
        int value = second.front();
        int newTop = -1;

        second.pop();
        while (first.size() != 1) {

            if (first.size() == 2) {
                newTop = first.front();
            }
            second.push(first.front());
            first.pop();
        }
        first = second;
        while (!second.empty()) {
            second.pop();
        }
        second.push(newTop);
        return value;
    }
    
    int top() {
        return second.front();
    }
    
    bool empty() {
        return first.empty();
    }
};

// 1, 2, --> 3

// 


/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */