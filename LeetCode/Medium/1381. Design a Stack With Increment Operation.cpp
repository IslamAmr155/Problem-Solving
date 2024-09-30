class CustomStack {
public:
    vector<int> v;
    int k;

    CustomStack(int maxSize) {
        k = maxSize;
    }
    
    void push(int x) {
        if (v.size() == k) return;
        v.push_back(x);
    }
    
    int pop() {
        if (!v.size()) return -1;
        int x = v[v.size() - 1];
        v.pop_back();
        return x;
    }
    
    void increment(int k, int val) {
        for (int i = 0;i < min(k, (int)v.size());i++) v[i] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */