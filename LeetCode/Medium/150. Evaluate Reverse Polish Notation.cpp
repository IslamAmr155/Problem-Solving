class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int i = 0, n = tokens.size();
        while (i < n)
        {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
                s.push(stoi(tokens[i]));
            else
            {
                int y = s.top();
                s.pop();
                int x = s.top();
                s.pop();
                if (tokens[i] == "+")
                    s.push(x+y);
                else if (tokens[i] == "-")
                    s.push(x-y);
                else if (tokens[i] == "*")
                    s.push(x*y);
                else
                    s.push(x/y);
            }
            i++;
        }
        return s.top();
    }
};