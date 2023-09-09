class SmallestInfiniteSet {
public:
    priority_queue<int, vector<int>, greater<int>> q;
    vector<bool> v;

    SmallestInfiniteSet() {
        for (int i=1;i<=1000;i++)
            q.push(i);
        v.resize(1001,1);
    }
    
    int popSmallest() {
        int num = q.top();
        v[num] = 0;
        q.pop();
        return num;
    }
    
    void addBack(int num) {
        if (!v[num])
        {
            q.push(num);
            v[num] = 1;
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */