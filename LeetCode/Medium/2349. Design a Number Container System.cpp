class NumberContainers {
public:
    unordered_map<int, priority_queue<int, vector<int>, greater<>>> m;
    unordered_map<int,int> i;

    NumberContainers() {
    }
    
    void change(int index, int number) {
        i[index] = number;
        m[number].push(index);
    }
    
    int find(int number) {
        while (!m[number].empty() && number != i[m[number].top()]) m[number].pop();
        if (m[number].empty()) return -1;
        return m[number].top();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */