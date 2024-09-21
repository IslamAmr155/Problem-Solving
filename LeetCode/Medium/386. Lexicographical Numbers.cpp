class Solution {
public:
    vector<int> ans;

    void rec(string s, int& n) {
        char i = s != "" ? '0' : '1';
        for (;i <= '9';i++) {
            string t = s + i;
            int temp = stoi(t);
            if (temp <= n) {
                ans.push_back(temp);
                rec(t,n);
            }
            else break;
        }
    }

    vector<int> lexicalOrder(int n) {
        rec("", n);
        return ans;    
    }
};