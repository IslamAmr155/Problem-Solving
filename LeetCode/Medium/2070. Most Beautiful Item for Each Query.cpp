class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());
        unordered_map<int, int> m;
        set<int> s;
        int ma = 0;
        for (auto& v : items) {
            s.insert(v[0]);
            ma = max(ma, v[1]);
            m[v[0]] = max(m[v[0]], ma);
        }
        vector<int> v(s.begin(), s.end()), ans;
        for (int& q: queries) {
            int e = v.size()-1, b = 0, mid = (b+e)/2, result;
            while (b <= e) {
                mid = (b+e) / 2;
                if (v[mid] == q) break;
                else if (v[mid] < q) {
                    result = mid;
                    b = mid+1;
                }
                else e = mid-1;
            }
            if (mid > 0 && v[mid] != q) mid = result;
            if (mid > 0 || q >= v[0]) ans.push_back(m[v[mid]]);
            else ans.push_back(0);
        }
        return ans;
    }
};