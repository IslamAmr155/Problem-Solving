class StockSpanner {
public:
    stack<pair<int,int>> s = stack<pair<int,int>>();
    StockSpanner() {
        
    }
    
    int next(int price) {
        if (price == NULL)
            return NULL;
        int c = 1;
        while (!s.empty() && price >= s.top().first)
        {
            c += s.top().second;
            s.pop();
        }
        s.push({price,c});
        return c;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */