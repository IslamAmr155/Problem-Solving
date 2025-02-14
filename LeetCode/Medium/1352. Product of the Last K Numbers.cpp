class ProductOfNumbers {
public:
    vector<int> v = {1};

    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if (num == 0) v = {1}; 
        else v.push_back(num * v[v.size() - 1]);
    }
    
    int getProduct(int k) {
        return  k >= v.size() ? 0 : v[v.size() - 1] / v[v.size() - 1 - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */