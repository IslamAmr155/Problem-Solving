class MyCircularDeque {
public:
    vector<int> v;
    int size;

    MyCircularDeque(int k) {
        size = k;
    }
    
    bool insertFront(int value) {
        if (v.size() == size) return false;
        v.insert(v.begin(), value);
        return true;
    }
    
    bool insertLast(int value) {
        if (v.size() == size) return false;
        v.push_back(value);
        return true;
    }
    
    bool deleteFront() {
        if (v.size() == 0) return false;
        v.erase(v.begin());
        return true;
    }
    
    bool deleteLast() {
        if (v.size() == 0) return false;
        v.pop_back();
        return true;
    }
    
    int getFront() {
        if (v.size() == 0) return -1;
        return v[0];
    }
    
    int getRear() {
        if (v.size() == 0) return -1;
        return v[v.size() - 1];
    }
    
    bool isEmpty() {
        return v.empty();
    }
    
    bool isFull() {
        return v.size() == size;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */