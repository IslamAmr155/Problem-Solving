class RandomizedSet {
public:
    set<int> s;
    vector<int> v;
    RandomizedSet() {

    }
    
    bool insert(int val) {
        bool present = s.count(val);
        if (!present){
            s.insert(val);
            v.push_back(val);
        }
        return !present;
    }
    
    bool remove(int val) {
        bool present = s.count(val);
        if (present) {
            s.erase(val);
            v.erase(std::remove(v.begin(),v.end(),val), v.end());
        }
        return present;
    }
    
    int getRandom() {
        int r = rand() % v.size(); 
        return v[r];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */