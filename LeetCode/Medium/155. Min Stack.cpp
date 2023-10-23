class MinStack {
public:
    stack<int> s;
    int m = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if (val <= m)
        {
            s.push(m);
            m = val;
        }
        s.push(val);
    }
    
    void pop() {
        if (s.top() == m)
        {
            s.pop();
            m = s.top();
            s.pop();
        }
        else
            s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return m;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */