class Solution {
public:
    string countOfAtoms(string formula) {
        map<string,int> m;
        int temp = 0, factor = 1, mul = 1;
        string s = "";
        stack<int> st;
        for (int i = formula.size() - 1;i>=0;i--) {
            if (formula[i] == '(') {
                if (temp || s != "") m[s] += (temp != 0 ? temp : 1) * factor;
                factor /= st.top();
                st.pop();
                s = "";
                temp = 0;
                mul = 1;
            }
            else if (isdigit(formula[i])) {
                temp += (formula[i] - '0') * mul;
                mul *= 10; 
            }
            else if (isupper(formula[i])) {
                s = formula[i] + s;
                m[s] += (temp != 0 ? temp : 1) * factor;
                s = "";
                temp = 0;
                mul = 1;
            }
            else if (formula[i] == ')') {
                if (!temp) temp = 1;
                factor *= temp;
                st.push(temp);
                temp = 0;
                mul = 1;
            }
            else s = formula[i] + s;
        }
        if (temp || s != "") m[s] += (temp != 0 ? temp : 1) * factor;
        string ans = "";
        for (auto i = m.begin();i!=m.end();i++) {
            ans += i->first;
            ans += i->second != 1 ? to_string(i->second) : "";
        }
        return ans;
    }
};