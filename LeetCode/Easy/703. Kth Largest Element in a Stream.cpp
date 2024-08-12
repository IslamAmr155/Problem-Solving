class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> q;
    int limit;

    KthLargest(int k, vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int n = nums.size();
        limit = k;
        for (int i = 0;i<min(k,n);i++) q.push(nums[i]);
    }
    
    int add(int val) {
        q.push(val);
        if (q.size() > limit) q.pop();
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */