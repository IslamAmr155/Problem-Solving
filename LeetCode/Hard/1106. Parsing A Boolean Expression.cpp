class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> s;
        for (char& c : expression) {
            if (c == '(' || c == ',') continue;
            else if(c != ')') s.push(c);
            else {
                vector<bool> b;
                while (s.top() != '!' && s.top() != '&' && s.top() != '|') b.push_back(s.top() == 't'), s.pop();
                char c = s.top();
                s.pop();
                switch(c) {
                    case '&':
                        s.push(accumulate(b.begin(), b.end(), 1, [](bool a, bool b) {
                            return a & b;
                        }) ? 't' : 'f');
                        break;
                    case '|':
                        s.push(accumulate(b.begin(), b.end(), 0, [](bool a, bool b) {
                            return a | b;
                        }) ? 't' : 'f');
                        break;
                    case '!':
                        s.push(!b[0] ? 't' : 'f');
                        break;       
                }
            }
        }
        return s.top() == 't';
    }
};