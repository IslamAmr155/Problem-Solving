class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> ans;
        for (int i = 0;i<expression.size();i++) {
            if (!isdigit(expression[i])) {
                vector<int> left = diffWaysToCompute(expression.substr(0,i));
                vector<int> right = diffWaysToCompute(expression.substr(i+1));
                for (int x : left)
                    for (int y : right)
                        switch(expression[i]) {
                            case '+':
                                ans.push_back(x+y);
                                break;
                            case '-':
                                ans.push_back(x-y);
                                break;
                            case '*':
                                ans.push_back(x*y);
                                break;
                        }
            }
        }
        if (!ans.size()) ans.push_back(stoi(expression));
        return ans;
    }
};